int pino_saida = 2;     // atuador ativado pelo pino digital 2
int valor = 0;

#include <math.h>

float freq = 12; //respiração/min
double T = lround(60/freq) ; //segundos
double t = 0;
long int espera = lround( 1000*T/(2*255) );


void setup() {
  pinMode(pino_saida, OUTPUT);  // configura  o pino como saída
  Serial.begin(9600); //vamos ver se sai tudo certo por aqui
}

void loop() {

  for(int cont=0 ; cont<=255 ; cont++){

      t = cont*T/(2*255) ;  
      valor = lround(255*sin(2*PI*t/T)); //aqui pode ficar t e T em segundos mesmo

      if( cont % 2 != 0 ){
        analogWrite(pino_saida,valor);
        Serial.print("valor = ");
        Serial.print(valor);
        delay(espera);
      }
      else{
        delay(2*espera);
      } 
    
    }
    
  delay(lround(1000*T/2));
}
