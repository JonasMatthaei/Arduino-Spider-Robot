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


// Default Positionen 
int v_default = 45;
int h_default = 35;
int l_default = 20;


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

  //delay for code upload
  delay(700);
  //in defau position gehen
 

  defaultPosition();
  delay(500);
  up();
  delay(5000);
  //loop();

}


//default position
void defaultPosition(){

  vertical_0.write(v_default);
  vertical_1.write(v_default + 90);  //Symmetrie
  vertical_2.write(v_default);
  vertical_3.write(v_default + 90);  //Symmetrie

  horizontal_0.write(h_default);
  horizontal_1.write(h_default + 90);  //Symmetrie
  horizontal_2.write(h_default);
  horizontal_3.write(h_default + 90);  //Symmetrie

  leg_0.write(l_default + 10);  //Korrektur der Symmetrie um 10
  leg_1.write(l_default + 140);  //Symmetrie
  leg_2.write(l_default);
  leg_3.write(l_default + 140);  //Symmetrie

}

void up() {

  for(int i=0; i <= 10; i++) {
     


    vertical_0.write(v_default + 50);         //up    
    vertical_1.write(v_default + 90 - 50);
    vertical_2.write(v_default + 50);
    vertical_3.write(v_default + 90 - 50);

    leg_0.write(l_default + 10 + 40);
    leg_1.write(l_default + 140 - 40);
    leg_2.write(l_default + 40);
    leg_3.write(l_default + 140 - 40);

    delay(1000);

  vertical_0.write(v_default);
  vertical_1.write(v_default + 90);  //Symmetrie
  vertical_2.write(v_default);
  vertical_3.write(v_default + 90);  //Symmetrie

  horizontal_0.write(h_default);
  horizontal_1.write(h_default + 90);  //Symmetrie
  horizontal_2.write(h_default);
  horizontal_3.write(h_default + 90);  //Symmetrie

  leg_0.write(l_default + 10);  //Korrektur der Symmetrie um 10
  leg_1.write(l_default + 140);  //Symmetrie
  leg_2.write(l_default);
  leg_3.write(l_default + 140);  //Symmetrie

    delay(1000);

    
    vertical_0.write(v_default - 50);         //up    
    vertical_1.write(v_default + 90 + 50);
    vertical_2.write(v_default - 50);
    vertical_3.write(v_default + 90 + 50);

    leg_0.write(l_default + 10 - 40);
    leg_1.write(l_default + 140 + 40);
    leg_2.write(l_default - 40);
    leg_3.write(l_default + 140 + 40);


    
}
}
