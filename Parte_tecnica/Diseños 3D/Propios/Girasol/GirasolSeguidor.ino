//
****   AUTOR: La croqueta educativa
***   Código: girasol seguidor del sol




#include <Servo.h>

Servo myservo;
int pos=0; //Almacenamos en una variable la posición
int inputPhotoLeft=1;//Pin de la fotoresistencia=0 analog
int inputPhotoRight=0;//Pin de la fotoresistencia=1 analog


int Left=0;
int Right=0;

void setup(){
  Serial.begin(9600);
  myservo.attach(9);//Pin del servo
    }
void loop(){
  
  Left= analogRead(inputPhotoLeft);
    Right= analogRead(inputPhotoRight);
    Serial.println(Left);
    Serial.println(Right);



    if(Left>(Right+20)){
      
      if(pos<179)
      pos++;
      myservo.write(pos);
      }

  if(Right>(Left+20)){
    
    if(pos>1)
    pos-=1;
    myservo.write(pos);
    }
  delay(10);
  }


