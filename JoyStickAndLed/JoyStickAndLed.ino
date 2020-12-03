int portJoy;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  portJoy = analogRead(0);
  portJoy = map(portJoy, 0, 1023, 0, 255);
  
  Serial.println(portJoy);
  analogWrite(10, portJoy);

}
