int ledPin = 14;

// INPUTS
int frequencia = 1000; // frequencia em Hz
int bits = 8;           // resolucao 2 a 12 bits
float duty_cycle = 0.8; // porcentagem de 0.01 a 0.99

// OUTPUT
float bytes = duty_cycle*pow(2,bits);

void setup(){
  pinMode(ledPin, OUTPUT);
  ledcAttach(ledPin, frequencia, bits);
}

void loop(){
  ledcWrite(ledPin, bytes);
  delay(2);
}