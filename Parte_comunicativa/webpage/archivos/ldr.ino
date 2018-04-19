/**
 * Encendido de un LED mediante un LDR
 *
 * En esta práctica tenemos que programar utilizando un sensor LDR
 * el encendido automático de un led.
 *
 
 * @license Creative Commons. Reconocimiento CompartirIgual 4.0 
 * 
 * 
 */

// Aquí defnimos las variables a usar, primero el pin donde conectaremos la salida del LED, después el pin donde mediremos la tensión del dividor de tensión y una tercera variable para poner un límite  y así controlar el led.
int ledPin = 12;
int ldrPin = A0;
int limite = 50;

//Este código se ejecuta una sola vez
void setup() {
  
  // Configuramos el pin del led  en modo salida y el dividor de tensión en modo entrada
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

//Este código se ejecuta en bucle repetidamente
void loop() {     

  // Lectura del pin del interruptor
  if (analogRead(ldrPin) < limite) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
    
  };
Serial.println(A0);
}
