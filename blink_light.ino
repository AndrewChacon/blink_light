int redLED=9;
int blueLED=10;
//int onTime=500;
//int offTime=500;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
//  digitalWrite(blueLED, HIGH);
//  delay(onTime);
//  digitalWrite(blueLED, LOW);
//  delay(offTime);

  digitalWrite(redLED, HIGH);
  digitalWrite(blueLED, HIGH);
}
