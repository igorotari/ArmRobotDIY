#include <Servo.h> // include the library for working with the servo motor
Servo myservo1; // create objects to control servos
Servo myservo2;
Servo myservo3;
Servo myservo4;

int pos1 = 80, pos2 = 60, pos3 = 130, pos4 = 0; // set initial angles for the servos

void setup() {
// attach the servos to the corresponding pins on the board
myservo1.attach(A1);
myservo2.attach(A0);
myservo3.attach(6);
myservo4.attach(9);

// set the initial positions for the servos
myservo1.write(pos1);
delay(1000);
myservo2.write(pos2);
myservo3.write(pos3);
myservo4.write(pos4);
delay(1500);
}

void loop() {
// turn to the right
for (pos1; pos1 > 0; pos1--) {
myservo1.write(pos1);
delay(5);
}
delay(1000);

// open the claw
for (pos4; pos4 < 100; pos4++) {
myservo4.write(pos4);
}
delay(1000); //

// rotate servo 2 to 50 degrees
for (pos2; pos2 > 50; pos2--) {
myservo2.write(pos2);
delay(5);
}

// rotate servo 3 to 50 degrees
for (pos3; pos3 > 50; pos3--) {
myservo3.write(pos3);
delay(5);
}
delay(1500);

// close the claw
for (pos4; pos4 > 0; pos4--) {
myservo4.write(pos4);
}
delay(1000);

// rotate servo 3 to 120 degrees, lifting the arm
for (pos3; pos3 < 120; pos3++) {
myservo3.write(pos3);
delay(5);
}
delay(1000);

// turn to the left
for (pos1; pos1 < 180; pos1++) {
myservo1.write(pos1);
delay(5);
}
delay(1000);

// lower the arm
for (pos3; pos3 > 50; pos3--) {
myservo3.write(pos3);
delay(5);
}
delay(1000);
// open the claw
for (pos4; pos4 < 100; pos4++) {
myservo4.write(pos4);
}
delay(1000);

// lift the arm
for (pos3; pos3 < 120; pos3++) {
myservo3.write(pos3);
delay(5);
}
delay(1000);

// close the claw
for (pos4; pos4 > 0; pos4--) {
myservo4.write(pos4);
}
delay(1000);
