#include <NewPing.h>
//defining variables to initialize Ultrasonic Sensor.
int trig=26, echo=27, distanceToCheck=100;

//initializing new ping library with pins connected on board and distance to check.
NewPing sonar (trig, echo, distanceToCheck);

void setup() {

  //getting logs from th eboard
  Serial.begin(1000);
}

void loop() {
  //printing the values via serial communication from board
  Serial.print("The Distance is: ");
  Serial.println(sonar.ping_cm());
}
