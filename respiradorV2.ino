//26-03-2020
// Essa versão considera o acionamento de 2 válvulas pneumáticas start/stop para administrar o fluxo de ar de uma linha hospitalar
// Teremos uma válvula de admissão e outra de exaustão

#include <math.h>

const int pino_valv1 = 2;     // atuador ativado pelo pino digital 2
const int pino_valv2 = 3;

float freq = 10; //respiração/min
float T = lround(60/freq) ; //segundos

void setup() {
  pinMode(pino_valv1,OUTPUT);  // configura  o pino 2 como saída da válvula 1
  pinMode(pino_valv2,OUTPUT);  // configura  o pino 3 como saída da válvula 1
}

void loop() {

      digitalWrite(pino_valv1,HIGH);
      digitalWrite(pino_valv2,LOW);
      
      delay(lround(1000*T/2)); //milisegundos

      digitalWrite(pino_valv1,LOW);
      digitalWrite(pino_valv2,HIGH);

      delay(lround(1000*T/2)); //milisegundos

}
