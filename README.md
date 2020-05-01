# arduino-sensor-som-controlando-leds

## Objetivo

Circuito simples que detecta palmas utilizando sensor de som KY-038 para ligar leds com uma ou duas palmas utilizando Arduino Uno.

### Vídeo

[![Vídeo](https://user-images.githubusercontent.com/22710963/76327558-ec8f0a80-62c8-11ea-98f4-5571d3f16968.png)](hhttps://youtu.be/XSjgPrTVyCI)

### Circuito
  
![image](https://user-images.githubusercontent.com/22710963/76347840-068b1600-62e6-11ea-89e8-b38b4bbaeca4.png)

## Hardware necessário

```
- a) 1 Placa Arduino com cabo USB
- b) 1 Sensor de som KY-038
- c) 1 Protoboard
- d) 5 LEDs comum de 4mm
- e) 5 Resistores: 220-300Ω
- f) 11-13 Cabos de conexão
```

### a) Placa Arduino Uno

![image](https://user-images.githubusercontent.com/22710963/77551422-16cbf500-6e91-11ea-850d-7e3989c9f1f2.png)

### b) Sensor Som KY-038

![image](https://user-images.githubusercontent.com/22710963/77604369-14998300-6ef1-11ea-977d-2bbdb8241a28.png)

### c) Protoboard

![image](https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png)

### d) LEDS comuns de 4mm

![image](https://user-images.githubusercontent.com/22710963/77499523-14d24980-6e31-11ea-9ee1-2f44635a20be.png)

### e) Resistores

![image](https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png)

### f) Cabos de conexão

![image](https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png)

### Configuração

Ao ligar o circuito com o código fonte deste projeto o LED VERMELHO não pode estar aceso, isso indica alto nível de ruído no ambiente. Se isso ocorrer fique girando a regulagem do sensor até desligar o LED. A regulagem de sensibilidade de ruído que é feita com o Arduino ligado na porta USB do computador é diferente da que ele está alimentado com uma fonte de 5v.
  
![image](https://user-images.githubusercontent.com/22710963/77605498-d2257580-6ef3-11ea-8801-5d045509c80a.png)

### Links úteis

- [Manual do mundo](https://www.youtube.com/watch?v=vEdYjAbzrAE&list=PLYjrJH3e_wDPwKigz0AcIgzk9BF4lqDuy)

- [Calculadora de Resistência](http://resistor.cherryjourney.pt/) - Calculadora de Resistência

### Aplicações

- Ligar/desligar equipamentos através do som

- Registrar log de máquinas com ruídos muito alto em equipamentos industriais

- Registrar ruídos acima do limite em ambientes silenciosos
