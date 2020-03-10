# arduino-sensor-som-controlando-leds
Circuito simples que detecta palmas utilizando sensor de som KY-038 e liga/desliga 2 pares de leds com uma ou duas palmas.

### Ligando e desligando leds batendo 1 ou 2 palmas (vídeo)
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://youtu.be/XSjgPrTVyCI" >
  <img src="https://user-images.githubusercontent.com/22710963/76327558-ec8f0a80-62c8-11ea-98f4-5571d3f16968.png" alt="reset" style="max-width:100%;"></a>
</p> 


##### Ambiente Virtual de Hardware e Software [TinkerCad](https://www.tinkercad.com)  
- É possível simular tanto componentes de hardware quanto a lógica de programação envolvida no circuito. Bastante útil porque dispensa a compra dos componentes eletrônicos físicos e a instalação da IDE no computador pra testes.
- Esse projeto não está no TinkerCad porque nem todos os componentes aqui usados são disponibilizados no ambiente.

### Software necessário

- [IDE Arduino](https://www.arduino.cc/en/Main/Software)
- [Documentação sintaxe C++](https://www.arduino.cc/reference/en/)

### Software p/ gerar esquemas de circuitos elétricos 

- Útil para documentar projetos

- Versão paga [Fritzing](https://fritzing.org/home/)

- Versão gratuita (permite que seja atualizada) [Fritzing](https://softfamous.com/fritzing/download/)

## Hardware necessário
```
- a) 1 Placa Arduino com cabo USB
- b) 5 Resistores: 300Ω 
- c) 5 LEDs comum de 4mm 
- d) 1 Protoboard
- e) 11-13 Cabos de conexão 
- f) 1 Sensor de som KY-038 
```

 ### a) Placa Arduino com cabo USB
 Porta de 5V e 40mA
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png" alt="reset" style="max-width:100%;"></a></p> 

 ### b) Resistores  
 Servem para diminuir a tensão.
 
 <p>O de 300Ω instalado entre o negativo do LED e a conexão com GND do Arduino.</p>
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png">
  <img src="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png" alt="reset" style="max-width:100%;"></a></p> 
  
 <p>O de 10kΩ instalado entre o sensor de luminosidade e a conexão com 5v do Arduino.</p>
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76045486-fbc62f00-5f3b-11ea-83a6-bf60d99b9471.png">
  <img src="https://user-images.githubusercontent.com/22710963/76045486-fbc62f00-5f3b-11ea-83a6-bf60d99b9471.png" alt="reset" style="max-width:100%;"></a></p>
 
  ### c) LEDS comuns de 4mm
  Diodo com 2V e 15mA, perna maior ligada no positivo
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png" alt="reset" style="max-width:100%;"></a></p> 
 
  ### d) Protoboard 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png" alt="reset" style="max-width:100%;"></a></p> 

  ### e) Cabos de conexão
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png">
  <img src="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png" alt="reset" style="max-width:100%;"></a></p>     
  
  ### f) Sensor de som KY-038
  Altere com calma a regulagem do sensor pois do contrário vai passar muita raiva com ele.
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76327946-6aebac80-62c9-11ea-9b93-a7e231d9ef99.png">
  <img src="https://user-images.githubusercontent.com/22710963/76327946-6aebac80-62c9-11ea-9b93-a7e231d9ef99.png" alt="reset" style="max-width:100%;"></a></p> 


## Instalação dos Leds
Perna maior do LED é ligado no positivo e a perna menor precisa de um resistor de 220 ou 330 Ohm entre a ligação com o GND (negativo)
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png">
  <img src="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png" alt="reset" style="max-width:100%;"></a></p> 
  
  ## Fórmula Lei de Ohm
  V = R * I
  
 > O "I" significa a intensidade da corrente elétrica, no entanto, muitas vezes se fala apenas da corrente elétrica (sem a palavra intensidade). Quando existe uma diferença de potencial elétrico entre componentes (polarizado) acontece um fluxo de partículas que equilibra o campo elétrico. Esse fluxo é a corrente elétrica.
 
> A corrente elétrica é medida em Ampere (A) que nada mais é do que a quantidade de elétrons que passa nesse fio em um tempo determinado!

> A tensão elétrica (V) é medida em Volts (V) (em homenagem ao físico Alessandro Volta).

> A resistência (R) é medida em Ohm (Ω) e a intensidade da corrente elétrica (I) em Ampere (A).

> A relação entre tensão, resistência e intensidade da corrente define a Lei de Ohm: V = R * I

> Para calcular a corrente: I = V / R

> Para calcular a resistência: R = V / I

> Para calcular a tensão: V = R * I

### Circuito
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76347840-068b1600-62e6-11ea-89e8-b38b4bbaeca4.png">
  <img src="https://user-images.githubusercontent.com/22710963/76347840-068b1600-62e6-11ea-89e8-b38b4bbaeca4.png" alt="reset" style="max-width:100%;"></a>
</p> 

### Tabela de Cores dos resistores na convenção internacional
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png">
  <img src="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png" alt="reset" style="max-width:100%;"></a>
</p> 

  

###  Aplicações
<p> Acender luzes ou outros aparelhos através de palmas </p>
 


  
