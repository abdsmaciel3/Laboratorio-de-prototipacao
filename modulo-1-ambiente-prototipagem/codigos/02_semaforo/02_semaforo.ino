int const led_vermelho = 12;
int const led_amarelo = 11;
int const led_verde = 10;
#define verde 12  //alternativa macro para "nomear" porta

void setup() {
    pinMode(led_vermelho,OUTPUT);
    pinMode(led_amarelo,OUTPUT);
    pinMode(led_verde,OUTPUT);
}

void loop() {
    digitalWrite(led_vermelho,HIGH);
    digitalWrite(led_amarelo,LOW);
    delay(1000);
                 
    digitalWrite(led_vermelho,LOW);
  	digitalWrite(led_verde,HIGH);
    delay(1000);
    
  	digitalWrite(led_verde,LOW);
    digitalWrite(led_amarelo,HIGH);
    delay(1000);
   
}
