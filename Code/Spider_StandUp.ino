#include <Servo.h>
Servo horizontal_0;    // erzeugt ein Servomotor-Objekt
Servo vertical_0;     // erzeugt ein Servomotor-Objekt
Servo leg_0;

Servo horizontal_1;
Servo vertical_1;     
Servo leg_1;

Servo horizontal_2;
Servo vertical_2;     
Servo leg_2;

Servo horizontal_3;
Servo vertical_3;     
Servo leg_3;
// maximal können acht Servomotor-Objekte erzeugt werden
int pos1 = 0; 
int pos2 = 90;  
int pos3 = 90; 
int pos4 = 50;
int pos5 = 130; // Variable, die die Servoposition (Winkel) speichert
void setup(){
  horizontal_0.attach(4);
  leg_0.attach(3);  
  vertical_0.attach(2);    //Complex 0

  horizontal_1.attach(7);
  leg_1.attach(6);  
  vertical_1.attach(5);    //Complex 1

 
  horizontal_2.attach(19);
  leg_2.attach(18);  
  vertical_2.attach(17);     // Complex 2
  
  horizontal_3.attach(16);
  leg_3.attach(15);  
  vertical_3.attach(14);     //Complex 3 
}

void loop()
{                           // Start Complex 0
  vertical_0.write(pos2);
  vertical_1.write(pos2);
  vertical_2.write(pos2);
  vertical_3.write(pos2);

  horizontal_0.write(pos4);
  horizontal_2.write(pos4);
  horizontal_1.write(pos5);
  horizontal_3.write(pos5);

  leg_0.write(pos3);
  leg_1.write(pos3);
  leg_2.write(pos3);
  leg_3.write(pos3);
   

}
