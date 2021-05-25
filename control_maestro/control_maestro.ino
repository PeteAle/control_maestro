// Se definene las librerías a utilizar

#include <EEPROM.h>

#define 
#define 

int addr = 0;

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
  

}

void eepromWrite(int addr, float val){
  
}
