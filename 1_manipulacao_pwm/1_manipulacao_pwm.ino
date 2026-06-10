int ledPin = 14;

// INPUTS
int frequencia = 10000; // frequencia em Hz
int bits = 8;           // resolucao 2 a 12 bits
float duty_cycle;       // porcentagem de 0.01 a 0.99

// OUTPUT
float bytes;

void setup(){
  pinMode(ledPin, OUTPUT);
  ledcAttach(ledPin, frequencia, bits);
}

void loop(){
  for (int i=0; i<10; i++){
    duty_cycle = 0.1*i;
    bytes = duty_cycle*pow(2,bits);
    ledcWrite(ledPin, bytes);
    delay(200);          //Adicionado para que a variação de duty cycle seja visivel a olho nu em um LED
  }

}