# arduino-sensor-som-controlando-leds

Circuito simples que detecta palmas utilizando sensor de som KY-038 para ligar leds com uma ou duas palmas utilizando Arduino Uno.
  
### Ligando e desligando leds batendo 1 ou 2 palmas (vídeo)
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://youtu.be/XSjgPrTVyCI" >
  <img src="https://user-images.githubusercontent.com/22710963/76327558-ec8f0a80-62c8-11ea-98f4-5571d3f16968.png" alt="reset" style="max-width:100%;"></a>
</p> 
  
 ### Circuito

<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76347840-068b1600-62e6-11ea-89e8-b38b4bbaeca4.png">
  <img src="https://user-images.githubusercontent.com/22710963/76347840-068b1600-62e6-11ea-89e8-b38b4bbaeca4.png" alt="reset" style="max-width:100%;"></a>
</p> 
   
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
 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77551422-16cbf500-6e91-11ea-850d-7e3989c9f1f2.png">
  <img src="https://user-images.githubusercontent.com/22710963/77551422-16cbf500-6e91-11ea-850d-7e3989c9f1f2.png" alt="reset" style="max-width:100%;"></a></p> 

  ### b) Sensor Som KY-038
  
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77604369-14998300-6ef1-11ea-977d-2bbdb8241a28.png">
  <img src="https://user-images.githubusercontent.com/22710963/77604369-14998300-6ef1-11ea-977d-2bbdb8241a28.png" alt="reset" style="max-width:100%;"></a></p> 
 
  ### c) Protoboard 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png" alt="reset" style="max-width:100%;"></a></p> 

 ### d) LEDS comuns de 4mm
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499523-14d24980-6e31-11ea-9ee1-2f44635a20be.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499523-14d24980-6e31-11ea-9ee1-2f44635a20be.png" alt="reset" style="max-width:100%;"></a></p> 

 ### e) Resistores  
 <p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png">
  <img src="https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png" alt="reset" style="max-width:100%;"></a></p> 

  ### f) Cabos de conexão
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png">
  <img src="https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png" alt="reset" style="max-width:100%;"></a></p>     
  
  
### Configuração

Ao ligar o circuito com o código fonte deste projeto o LED VERMELHO não pode estar aceso, isso indica alto nível de ruído no ambiente. Se isso ocorrer fique girando a regulagem do sensor até desligar o LED. A regulagem de sensibilidade de ruído que é feita com o Arduino ligado na porta USB do computador é diferente da que ele está alimentado com uma fonte de 5v.
  
  <p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/77605498-d2257580-6ef3-11ea-8801-5d045509c80a.png">
  <img src="https://user-images.githubusercontent.com/22710963/77605498-d2257580-6ef3-11ea-8801-5d045509c80a.png" alt="reset" style="max-width:100%;"></a></p>     
  
  

### Links úteis

- [Manual do mundo](https://www.youtube.com/watch?v=vEdYjAbzrAE&list=PLYjrJH3e_wDPwKigz0AcIgzk9BF4lqDuy)

- [IDE Arduino](https://www.arduino.cc/en/Main/Software)
 
- [Documentação sintaxe C++](https://www.arduino.cc/reference/en/)

- [Fritzing](https://fritzing.org/home/) - Licença comercial

- [Fritzing](https://softfamous.com/fritzing/download/) - Versão gratuita (antiga mas permite que seja atualizada)

- [TinkerCad](https://www.tinkercad.com) - Ambiente Virtual p/ prototipagem

- [Calculadora de Resistência](http://resistor.cherryjourney.pt/) - Calculadora de Resistência 
 
###  Aplicações
 
 - Ligar/desligar equipamentos através do som
 
 - Registrar log de máquinas com ruídos muito alto em equipamentos industriais
 
 - Registrar ruídos acima do limite em ambientes silenciosos

