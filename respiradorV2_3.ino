//26-03-2020

//respiradorV2_3: permite ajuste diferente para tempos de inspiração e expiração
// Essa versão considera o acionamento de 2 válvulas pneumáticas start/stop para administrar o fluxo de ar de uma linha hospitalar
// Teremos uma válvula de admissão e outra de exaustão

//////////////////////INPUTS DO PROGRAMA//////////////////////////////////////
          float Tinsp = 4 ; // tempo de inspiração (em segundos)                 
          float Texp = 6 ; // tempo de expiração (segundos)                        
//////////////////////////////////////////////////////////////////////////////


#include <math.h>

const int pino_valv1 = 2;     // válvula de entrada/inspiração
const int pino_valv2 = 3;     // válvula de saída/expiração


void setup() {
  pinMode(pino_valv1,OUTPUT);  // configura  o pino 2 como acionador da válvula 1
  pinMode(pino_valv2,OUTPUT);  // configura  o pino 3 como acionador da válvula 2
}

void loop() {

      //INSPIRA
      digitalWrite(pino_valv1,HIGH);
      digitalWrite(pino_valv2,LOW);
      
      delay( lround(1000*Tinsp) ); //milisegundos

      //EXPIRA
      digitalWrite(pino_valv1,LOW);
      digitalWrite(pino_valv2,HIGH);

      delay( lround( 1000*(Texp) ) ); //milisegundos

}