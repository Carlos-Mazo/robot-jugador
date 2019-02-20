#include <Servo.h>
#define PINservoderecho 9
#define PINservoizquierdo 13

Servo  motorDerecho;
Servo motorIzquierdo;
void setup() {
               Serial.begin(9600);
               motorDerecho.attach(PINservoderecho);
               motorIzquierdo.attach(PINservoizquierdo);

             }     
char orden;
        
void loop() {
              if(Serial.available ()>0)
              { 
                orden= Serial.read();
                
                switch(orden)
                {
                case 'w': case 'W':
                motorDerecho.write (20);
                motorIzquierdo.write (160);
                break;

                case 's':case 'S':
                motorDerecho.write(160);
                motorIzquierdo.write(20);
                break;

                case 'd': case 'D':
                motorDerecho.write(160);
                motorIzquierdo.write(160);
                break;

                case 'a': case 'A':
                motorDerecho.write (20);
                motorIzquierdo.write(20);
                break;

                case 'q': case 'Q':
                motorDerecho. write (90);
                motorIzquierdo.write(90);
                break;
                }
              }

                
           }


