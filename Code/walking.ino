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

void loop()
{
  for (int i = 0; i <= 180; i++)    // Movement Complex 0
  {
    horizontal_0.write(i);
    delay(15);

    vertical_0.write(i);
    delay(15);

    leg_0.write(i);
    delay(15);

  }

  for (int i = 180; i >= 0; i--)    // Movement Complex 1
  {
    horizontal_1.write(i);
    delay(15);

    vertical_1_1.write(i);
    delay(15);

    leg_1.write(i);
    delay(15);

  }

    for (int i = 180; i >= 0; i--)    // Movement Complex 2
  {
    horizontal_2.write(i);
    delay(15);

    vertical_2.write(i);
    delay(15);

    leg_2.write(i);
    delay(15);
  }

    for (int i = 180; i >= 0; i--)    //Movement Complex 3
  {
    horizontal_3.write(i); //write the i angle to the servo
    delay(15); //delay 15ms

    vertical_3.write(i);
    delay(15);

    leg_3_1.write(i);
    delay(15);
  }
}

}

delay(500);
 vertical_2.write(30);
 delay(400);
 horizontal_2.write(1);
 delay(400);
 vertical_2.write(pos2);
 delay(400);


