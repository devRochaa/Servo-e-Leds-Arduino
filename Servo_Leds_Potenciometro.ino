#include <Servo.h>
Servo servo1; // cria um novo objeto servo
int potenciometroPino0 = 0; // conecta potenciometro no porta analoga
int valorDoPotenciometro = 0; //valor lido no pino 0

void setup (){
  servo1.attach(9); //conecta o objeto servo1 ao pino 9
  pinMode (7, OUTPUT);
}//fim setup

void loop(){
  valorDoPotenciometro = analogRead(potenciometroPino0); // lê
  //um valor analógico do potenciometro de 0 a 255
  valorDoPotenciometro = map(valorDoPotenciometro, 0, 1023, 0 ,179);
  //o valor lido entre 0 a 1023 para um valor entre 0 e 180
  servo1.write(valorDoPotenciometro); //envia sunal para o servo p 
  delay(15); //aguarda o movimento do servo
  if (valorDoPotenciometro < 50){
   digitalWrite(7, HIGH);
  }else{
  digitalWrite(7,LOW);
}
  if (valorDoPotenciometro > 50 && valorDoPotenciometro < 100){
   digitalWrite(8, HIGH);
  }else{
  digitalWrite(8,LOW);
}
  if (valorDoPotenciometro > 100){
   digitalWrite(11, HIGH);
  }else{
  digitalWrite(11,LOW);
}
  
  
} //fim loop
