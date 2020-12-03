#include <Servo.h>

Servo servo1;
int portJoy;
int servoPin = 6;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(servoPin);
  servo1.write(90);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  portJoy = analogRead(0);
  portJoy = map(portJoy, 0, 1023, 0, 180);

  servo1.write(portJoy);
  Serial.println(portJoy);
  
  delay(100);

}
