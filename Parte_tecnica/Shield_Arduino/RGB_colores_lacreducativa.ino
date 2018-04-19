

//La croqueta educativa
// Codigo Shield Lacreducativa para led RGB

void setup() {
  // put your setup code here, to run once:
for (int i=9; i>12;i++){
  pinMode(i,OUTPUT);
  }
void color(int R, int G, int B){
  analogWrite(9,R); 
    analogWrite(10,G); 
      analogWrite(11,B); 


  }
void loop() {
  // put your main code here, to run repeatedly:
color(255,0,0);
delay (500);
color(0,255,0);
delay (500);
color(0,0,255);
delay (500);
color(0,0,0);
delay (500);
}
