#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int ledPins[] = {12, 14, 27, 26, 25, 33, 32, 19, 18, 5, 17, 16, 4, 0, 2 };  // Pinos dos LEDs na ordem correta
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);
int potPin = 13;

// Array de mensagens, uma para cada LED
String messages[] = {
  "pH = 0 Acido", 
  "pH = 1 Acido", 
  "pH = 2 Acido", 
  "pH = 3 Acido", 
  "pH = 4 Acido", 
  "pH = 5 Neutro", 
  "pH = 6 Neutro", 
  "pH = 7 Neutro", 
  "pH = 8 Neutro", 
  "pH = 9 Neutro", 
  "pH = 10 Alcalino", 
  "pH = 11 Alcalino", 
  "pH = 12 Alcalino", 
  "pH = 13 Alcalino", 
  "pH = 14 Alcalino" 
};

int previousLedCount = 0; // Variável para armazenar o número de LEDs anterior

void setup() {

  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  lcd.init();
  lcd.backlight();
}

void loop() {

  int potValue = analogRead(potPin);
  int ledCount = map(potValue, 0, 4095, 0, numLeds);

  // Verifica se o número de LEDs mudou
  if (ledCount != previousLedCount) {
    // Se mudou, atualiza o LCD com a nova mensagem
    if (ledCount > 0) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(messages[ledCount - 1]); // Exibe a mensagem do LED atual
    } else {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Conecte o sensor"); // Exibe a mensagem de nenhum LED aceso
    }
    previousLedCount = ledCount; // Atualiza a variável com o novo número de LEDs
  }

  // Acende os LEDs gradualmente da esquerda para a direita
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH); 
  }

  // Desliga os LEDs restantes
  for (int i = ledCount; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  delay(10);
}
