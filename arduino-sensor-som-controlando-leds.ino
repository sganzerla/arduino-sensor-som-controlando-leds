/* ******************** Interruptor Clap Manual do Mundo ********************
    
    Criado por: Fernando A Souza
    Rev.: 01
    Data: 03.08.2019

    Modificado por: Alisson Michel Sganzerla
    Data: 10.03.2020


    Guia de conexão:
     
    Arduino:
    SENSOR SOM: Pino Digital 2
    SENSOR SOM REGULAGEM: Pino Analógico A5
    LED 1: Pino Digital 4
    LED 2: Pino Digital 5
    LED 3: Pino Digital 6
    LED 4: Pino Digital 7
    LED TESTE: Pino Digital 13

    Sensor de Som (Módulo KY-038): 
    GND: GDN Arduino
    VCC: 5V Arduino
    
    LEDS: 
    GND: GDN Arduino com resistor de 220 a 300
    VCC: 5V Arduino
       
  ***************************************************************************** */

/**************************** DEFINIÇÕES ************************************* */

// Os números associados a cada variável seguem o guia de conexões e representam as portas digitais usadas.
#define LED_1PALMA1_PIN 4
#define LED_1PALMA2_PIN 5
#define LED_2PALMA1_PIN 6
#define LED_2PALMA2_PIN 7

#define SEN_SOM_DIG_PIN 2
// Utilizado para regular sensor de som
#define SEN_SOM_ANAL_PIN A5 // porta analógica
#define LED_TESTE_PIN 13

/***************************************************************************** */

/************************ VARIÁVEIS AUXILIARES ******************************* */

// Essas variáveis definem alguns parâmetros do programa e auxiliam na detecção e contagem das palmas.
int delayfinal = 100;      // Valor representa um tempo em milissegundos, esse tempo é aguardado pelo programa para que se inicie novamente o loop.
int duracaoPalma = 200;    // Valor representa um tempo em milissegundos, é o tempo que dura o som de uma palma, precisa ser calibrado entre 100 e 250.
int intervaloPalmas = 500; // Valor representa um tempo em milissegundos, é o intervalo máximo permitido entre uma sequência de palmas.
int quantidadePalmas = 0;  // Quantidade de palmas registradas.
long momentoPalma = 0;     // Marcador usado para a detecção das palmas, será utilizado junto com a função millis.
long esperaPalmas = 0;     // Marcador usado para contagem dos intervalos de tempo, será utilizado junto com a função millis.

/***************************************************************************** */

/******************* CONFIGURAÇÕES INICIAIS DO CÓDIGO ************************ */

void setup()
{
  setandoPinos();
  Serial.begin(9600);
}

/***************************************************************************** */

/********************* EXECUÇÃO DO CÓDIGO QUE SE REPETE ********************** */

void loop()
{

  acenderLedParaRegulagemSensor();

  // Faz a leitura digital do sensor de som, quando este sensor detecta som ele desliga a porta de entrada, mudando seu estado para LOW e quando não detecta mantem em HIGH.
  int leituraSom = digitalRead(SEN_SOM_DIG_PIN);
  // Ações quando o sensor detectar som, ou seja, entrar em LOW.
  if (leituraSom == HIGH)
  {
    // Marca o momento da palma, soma a quantidade de palmas e aguarda um intervalo para não marcar a mesma palma mais de uma vez.
    if (momentoPalma == 0)
    {
      momentoPalma = esperaPalmas = millis();
      quantidadePalmas = quantidadePalmas + 1;
    }
    else if ((millis() - momentoPalma) >= duracaoPalma)
    {
      momentoPalma = 0;
    }
  }

  // Verifica se nenhuma palma mais pode ser dada, e em seguida liga os leds conforme o número de palmas já registrado.
  if (((millis() - esperaPalmas) > intervaloPalmas) && (quantidadePalmas != 0))
  {

    if (quantidadePalmas == 1)
    {
      Serial.print("oi");
      digitalWrite(LED_1PALMA1_PIN, !digitalRead(LED_1PALMA1_PIN)); // O sinal de exclamação inverte do led, se estava ligado será desligado e vice versa.
      digitalWrite(LED_1PALMA2, !digitalRead(LED_1PALMA2));         // O sinal de exclamação inverte do led, se estava ligado será desligado e vice versa.
    }
    _PIN if (quantidadePalmas == 2)
    {
      digitalWrite(LED_2PALMA1_PIN, !digitalRead(LED_2PALMA1_PIN)); // O sinal de exclamação inverte do led, se estava ligado será desligado e vice versa.
      digitalWrite(LED_2PALMA2_PIN, !digitalRead(LED_2PALMA2_PIN)); // O sinal de exclamação inverte do led, se estava ligado será desligado e vice versa.
    }

    delay(delayfinal);    // Tempo de espera para continuar o programa, esse tempo é importante para evitar efeitos de possiveis detecções truncadas de ecos e reverberações no som.
    quantidadePalmas = 0; // Retoma a condição inicial da quantidade de palmas.
  }
}

void setandoPinos()
{
  // Definição para regulagem do sensor de som
  pinMode(SEN_SOM_ANAL_PIN, INPUT);
  pinMode(LED_TESTE_PIN, OUTPUT);

  // Definição da função de cada pino, se vão receber (INPUT) ou enviar (OUTPUT) informações.
  pinMode(SEN_SOM_DIG_PIN, INPUT);
  pinMode(LED_1PALMA1_PIN, OUTPUT);
  pinMode(LED_1PALMA2_PIN, OUTPUT);
  pinMode(LED_2PALMA1_PIN, OUTPUT);
  pinMode(LED_2PALMA2_PIN, OUTPUT);

  // Inicia todos os Leds desligados
  digitalWrite(LED_1PALMA1_PIN, LOW);
  digitalWrite(LED_1PALMA2_PIN, LOW);
  digitalWrite(LED_2PALMA1_PIN, LOW);
  digitalWrite(LED_2PALMA2_PIN, LOW);
}

void acenderLedParaRegulagemSensor()
{
  int som = analogRead(SEN_SOM_ANAL_PIN);
  if (digitalRead(SEN_SOM_DIG_PIN) == HIGH)
  {
    digitalWrite(LED_TESTE_PIN, HIGH);
    Serial.println(som);
  }
  else
  {
    digitalWrite(LED_TESTE_PIN, LOW);
  }
}
/***************************************************************************** */