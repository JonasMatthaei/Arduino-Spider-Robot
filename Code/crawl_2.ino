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
  delay(5000);
  loop();

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


void loop() {

    for (int i=0; i <= 10; i++) {
      
      
      vertical_2.write(v_default - 70);    //komplex 2 nach vorne
      leg_2.write(l_default + 70);
      delay(20);
      horizontal_2.write(h_default - 30  );
      delay(100);
      vertical_2.write(v_default + 10);
      leg_2.write(l_default);
      delay(500);

      vertical_0.write(v_default - 70);      //komplex 0 nach vorne
      leg_0.write(l_default + 10 + 50);
      delay(20);
      horizontal_0.write(h_default + 40);
      delay(100);
      vertical_0.write(v_default - 10);
      leg_0.write(l_default + 10);
      
      delay(500);

      vertical_1.write(v_default + 90 + 40);     //komplex 1 nach vorne
      leg_1.write(l_default - 80);
      delay(20);
      horizontal_1.write(h_default + 90 + 50 );
      delay(100);
      vertical_1.write(v_default + 90 - 10);
      leg_1.write(l_default + 140);

      delay(500);

      vertical_3.write(v_default + 90 + 70);     //komplex 3 nach vorne
      leg_3.write(l_default + 140 - 40);
      delay(20);
      horizontal_3.write(h_default + 90 - 40);
      delay(100);
      vertical_3.write(v_default + 90 + 10);
      leg_3.write(l_default + 140);

      delay(500);

      horizontal_2.write(h_default + 40);                  // Drück Bewegung der Horizontals
      horizontal_0.write(h_default - 30);
      horizontal_1.write(h_default + 90 - 40);
      horizontal_3.write(h_default + 90 + 40);

      delay(2000);

      
      vertical_2.write(v_default - 70);    //komplex 2 zurück in default
      leg_2.write(l_default + 70);
      delay(20);
      horizontal_2.write(h_default);
      delay(100);
      leg_2.write(l_default);
      vertical_2.write(v_default - 10);
      
      delay(500);

      vertical_0.write(v_default - 70);     //komplex 0 in zurück in default 
      leg_0.write(l_default + 10 + 70);
      delay(20);
      horizontal_0.write(h_default);
      delay(100);
      leg_0.write(l_default + 10);
      vertical_0.write(v_default - 10);
      
      delay(500);

      vertical_1.write(v_default + 90 + 15);     //komplex 1 in zurück in default 
      leg_1.write(l_default - 80);
      delay(20);
      horizontal_1.write(h_default + 90);
      delay(100);
      vertical_1.write(v_default + 90 + 10);
      leg_1.write(l_default + 140);

      delay(500);

      vertical_3.write(v_default + 90 + 30);     //komplex 3 in zurück in default 
      leg_3.write(l_default +140 - 40);
      delay(20);
      horizontal_3.write(h_default + 90);
      delay(100);
      vertical_3.write(v_default + 90 + 10);
      leg_3.write(l_default + 140);


     delay(500);
     
      }


}
