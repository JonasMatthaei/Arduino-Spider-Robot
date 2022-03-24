#include <Servo.h>
Servo horizontal_0;
Servo vertical_0;
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

void loop() {

    for (int i=0; i <= 10; i++) {



// Schritt 2
      
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
      horizontal_3.write(h_default + 40);


      delay(500);


 //Schritt 0

      vertical_0.write(v_default - 70);      //komplex 0 nach vorne
      leg_0.write(l_default + 10 + 50);
      delay(20);
      horizontal_0.write(h_default + 40);
      delay(100);
      vertical_0.write(v_default - 10);
      leg_0.write(l_default + 10);

      delay(300);

      vertical_2.write(v_default - 70);    //komplex 2 nach vorne
      leg_2.write(l_default + 70);
      delay(20);
      horizontal_2.write(h_default - 30  );
      delay(100);
      vertical_2.write(v_default + 10);
      leg_2.write(l_default);
      
       delay(300);


      vertical_3.write(v_default + 90 + 70);     //komplex 3 nach vorne
      leg_3.write(l_default + 140 - 40);
      delay(20);
      horizontal_3.write(h_default + 90 - 40);
      delay(100);
      vertical_3.write(v_default + 90 + 10);
      leg_3.write(l_default + 140);


      vertical_1.write(v_default + 90 + 40);     //komplex 1 nach vorne
      leg_1.write(l_default - 80);
      delay(20);
      horizontal_1.write(h_default + 90 + 50 );
      delay(100);
      vertical_1.write(v_default + 90 - 10);
      leg_1.write(l_default + 140);

      delay(300);


      horizontal_2.write(h_default + 40);                  // Drück Bewegung der Horizontals
      horizontal_0.write(h_default - 30);
      horizontal_1.write(h_default + 90 - 40);
      horizontal_3.write(h_default + 90);

      delay(300);


 


 //Schritt 1     
      vertical_1.write(v_default + 90 + 40);     //komplex 1 nach vorne
      leg_1.write(l_default - 80);
      delay(20);
      horizontal_1.write(h_default + 90 + 50 );
      delay(100);
      vertical_1.write(v_default + 90 - 10);
      leg_1.write(l_default + 140);


      delay(300);

      
      vertical_3.write(v_default + 90 + 70);     //komplex 3 nach vorne
      leg_3.write(l_default + 140 - 40);
      delay(20);
      horizontal_3.write(h_default + 90 - 40);
      delay(100);
      vertical_3.write(v_default + 90 + 10);
      leg_3.write(l_default + 140);

      delay(300);


      vertical_2.write(v_default - 70);    //komplex 2 nach vorne
      leg_2.write(l_default + 70);
      delay(20);
      horizontal_2.write(h_default - 30  );
      delay(100);
      vertical_2.write(v_default + 10);
      leg_2.write(l_default);
      
       delay(300);

      vertical_0.write(v_default - 70);      //komplex 0 nach vorne
      leg_0.write(l_default + 10 + 50);
      delay(20);
      horizontal_0.write(h_default + 40);
      delay(100);
      vertical_0.write(v_default - 10);
      leg_0.write(l_default + 10);

      delay(300);

      horizontal_2.write(h_default + 40);                  // Drück Bewegung der Horizontals
      horizontal_0.write(h_default - 30);
      horizontal_1.write(h_default + 90 - 40);
      horizontal_3.write(h_default + 90);


      delay(300);

//Schritt 3

      vertical_3.write(v_default + 90 + 70);     //komplex 3 nach vorne
      leg_3.write(l_default + 140 - 40);
      delay(20);
      horizontal_3.write(h_default + 90 - 40);
      delay(100);
      vertical_3.write(v_default + 90 + 10);
      leg_3.write(l_default + 140);

      delay(300);

      vertical_1.write(v_default + 90 + 40);     //komplex 1 nach vorne
      leg_1.write(l_default - 80);
      delay(20);
      horizontal_1.write(h_default + 90 + 50 );
      delay(100);
      vertical_1.write(v_default + 90 - 10);
      leg_1.write(l_default + 140);

      delay(300);


      vertical_0.write(v_default - 70);      //komplex 0 nach vorne
      leg_0.write(l_default + 10 + 50);
      delay(20);
      horizontal_0.write(h_default + 40);
      delay(100);
      vertical_0.write(v_default - 10);
      leg_0.write(l_default + 10);

      delay(300);


      vertical_2.write(v_default - 70);    //komplex 2 nach vorne
      leg_2.write(l_default + 70);
      delay(20);
      horizontal_2.write(h_default - 30  );
      delay(100);
      vertical_2.write(v_default + 10);
      leg_2.write(l_default);

      delay(300);


      horizontal_2.write(h_default + 40);                  // Drück Bewegung der Horizontals
      horizontal_0.write(h_default - 30);
      horizontal_1.write(h_default + 90 - 40);
      horizontal_3.write(h_default + 90);


      delay(300);     
     
      
      }


}
