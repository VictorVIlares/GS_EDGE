Monitoramento de pH da Água Marinha com ESP32

link: https://wokwi.com/projects/399981095132109825

Descrição do projeto:

  Este projeto demonstra um sistema de monitoramento de pH da água marinha utilizando um ESP32, um display LCD 16x2, 15 LEDs e um potenciômetro. 
  O sistema simula a leitura de um sensor de pH e exibe o valor em um display LCD, além de acender os LEDs gradualmente de acordo com a escala de pH (ácido, neutro, alcalino).
  
  Objetivo:
  
  O objetivo principal do projeto é desenvolver um sistema simples para monitorar a saúde de uma região marinha. 
  Através da visualização do pH da água, pesquisadores podem identificar potenciais problemas de poluição ou desequilíbrio ambiental.
  
Requisitos:
  -Plataforma Wokwi
  -ESP32
  -Display LCD 16x2 (I2C)
  -15 LEDs (de qualquer cor)
  -Protoboard
  -Potenciômetro
  
Instruções de Uso:

  O potenciômetro simula a leitura do sensor de pH.
  Ao girar o potenciômetro, o valor do pH será atualizado no display LCD.
  Os LEDs acendem gradualmente de acordo com o valor do pH, indicando se a água está ácida, neutra ou alcalina.

Funcionamento do Código:

  *O código sketch.ino usa a biblioteca LiquidCrystal_I2C para controlar o display LCD.
  *O potenciômetro é conectado ao pino A0 do ESP32.
  *O código mapeia o valor do potenciômetro para uma escala de 0 a 14, representando a escala de pH.
  *A cada mudança no valor do pH, o display LCD é atualizado com a mensagem correspondente.
  *Os LEDs são acendidos gradualmente, um de cada vez, de acordo com o valor do pH.
  
Observação:

  Este projeto simula a leitura de um sensor de pH. Para um sistema real, seria necessário conectar um sensor de pH ao ESP32.
  
Dependências:

  -Biblioteca LiquidCrystal_I2C


Victor Henrique Vilares Rodrigues / RM: 554175
