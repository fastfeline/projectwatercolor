
  int p1 = 3;
  int p2 = 4;
  int p3 = 5;
  int p4 = 6;
  int p5 = 7;
// the setup function runs once when you press reset or power the board
//p# refers to the pumps that the arduino is connected to
void setup() {
  // initialize ps as outputs.
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  pinMode(p5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(p1, HIGH); // turn the pump on
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  digitalWrite(p5, HIGH);
  delay(1000);                       // wait for a second
  digitalWrite(p1, LOW); //turn pump off
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, LOW);
  digitalWrite(p5, LOW);
  delay(1000);                       // wait for a second
}
