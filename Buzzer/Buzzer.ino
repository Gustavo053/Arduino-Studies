int pinBuzzer = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  tone(pinBuzzer, 2000);
  delay(1000);
  tone(pinBuzzer, 2500);
  delay(1000);
  tone(pinBuzzer, 0);
}
