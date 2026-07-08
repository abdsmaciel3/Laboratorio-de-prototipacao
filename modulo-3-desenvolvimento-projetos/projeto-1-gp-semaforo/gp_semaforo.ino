/* 
 GP_SEMÁFORO
 Autor: Cleto Leal - cleto.leal@oceanbrasil.com
 Data: 08/07/26 
 */

// Definições
    const int pinoBotao = 7;      // Definido explicitamente
    const int ledVermelho = 8;    // Pino do LED Vermelho
    int numLED = 6;               // LEDs (Verdes) de 2 a 6

void setup() {
  for (int pino = 2; pino <= numLED; pino++) {
    pinMode(pino, OUTPUT);
  }
    pinMode(pinoBotao, INPUT_PULLUP); // Botão no pino 7
    pinMode(ledVermelho, OUTPUT);
    digitalWrite(ledVermelho, LOW);
}

void loop() {
  digitalWrite(ledVermelho, HIGH);
  
  // CORREÇÃO: Lê o pino do botão e compara com LOW
  if (digitalRead(pinoBotao) == LOW) { 
    digitalWrite(ledVermelho, LOW);
    
    // Ciclo Ligar  
    for (int pino = 2; pino <= numLED; pino++) {
      digitalWrite(pino, HIGH);
      delay(500); 
    }
    
    // Ciclo Desligar
    for (int pino = 2; pino <= numLED; pino++) {
      digitalWrite(pino, LOW);
    }
  }
}
