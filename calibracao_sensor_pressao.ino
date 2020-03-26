
int analogInPin = 4;
int Vs = 5;
int leituraPino = 0;
float p = 0;
float Valimentacao = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(analogInPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  leituraPino = analogRead(analogInPin); // Voltage read in (0 to 1023)
  p = pressao(leituraPino,Valimentacao) ;
  Serial.print("p[kPa] = ");
  Serial.print(p);
  delay(2);
}


float pressao(int leituraPino,float Valimentacao){

  float Vout = leituraPino*Valimentacao/1023 ;
  p = (Vout/Valimentacao - 0.5)/0.018;

  return p;
}

