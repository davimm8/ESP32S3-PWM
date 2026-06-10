int ledPin = 2;

// INPUTS
int frequencia = 83800; // frequencia em Hz
int bits = 8;           // resolucao 2 a 12 bits
float duty_cycle = 0.9; // porcentagem de 0.01 a 0.99

// OUTPUT
float bytes = duty_cycle*pow(2,bits);

void setup(){
  pinMode(ledPin, OUTPUT);
  ledcAttachPin(ledPin, 0);
  ledcSetup(0, frequencia, bits);
}

void loop(){
    ledcWrite(0, bytes);
    delay(2);
}