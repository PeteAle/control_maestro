// Se definene las librerías a utilizar

#include <EEPROM.h>

#define 
#define 

int addr = 0;
char inicio = '<'
char fin = '>'

// Constantes del control 1
float kp1 = 0;
float ki1 = 0;
float kd1 = 0;

// Constates del control 2
float kp2 = 0;
float ki2 = 0;
float kd2 = 0;

// Constantes del control 3
float kp3 = 0;
float ki3 = 0;
float kd3 = 0;

// Constates del control 4
float kp4 = 0;
float ki4 = 0;
float kd4 = 0;

// Constantes del control 5
float kp5 = 0;
float ki5 = 0;
float kd5 = 0;

// Constates del control 6
float kp6 = 0;
float ki6 = 0;
float kd6 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  println("Tiva C conectada.");
}

void loop() {
  // put your main code here, to run repeatedly: 
  enviarDatos();
  if (Serial.available() > 0){
    
  }
}

void enviarDatos(float kp1, ki1, kd1, kp2, ki2, kd2, kp3, ki3, kd3, kp4, ki4, kd4, kp5, ki5, kd5, kp6, ki6, kd6) {
  // String de inicio del conjunto de datos
  Serial.write(inicio);
  // Constantes PID 1
  Serial.write(kp1);
  Serial.write(ki1);
  Serial.write(kd1);
  // Constantes PID 2
  Serial.write(kp2);
  Serial.write(ki2);
  Serial.write(kd2);
  //Constantes PID 3
  Serial.write(kp3);
  Serial.write(ki3);
  Serial.write(kd3);
  // Constantes PID 4
  Serial.write(kp4);
  Serial.write(ki4);
  Serial.write(kd4);
  // Constantes PID 5
  Serial.write(kp5);
  Serial.write(ki5);
  Serial.write(kd5);
  // Constantes PID 6
  Serial.write(kp6);
  Serial.write(ki6);
  Serial.write(kd6);
  // String de finalización del conjunto de datos.
}

void eepromWrite(int addr, float val){
  
}
