#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
bool check;
bool forward;
bool moving;
int rotation

void setup() {
   Serial.begin(9600);
   delay(1000);
   check = true;
   forward = true;
   moving = false;
}


void loop() {
   a=sr04.Distance();
   delay(1000);
   if (check = true){
        if (a<21){
          Serial.println("close");
          forward = false;
          check = false
        }
        if (a>20){
          forward = true;
        }
    
  
    if (forward = false){
      
    }
   }
}
