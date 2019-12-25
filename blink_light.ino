int blueLEDPin=9;
int redLEDPin=10;
int blueOnTime=250;
int blueOffTime=250;
int redOnTime=250;
int redOffTime=250;

void setup() {
  // put your setup code here, to run once:

  pinMode(blueLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int j=0; j<=1; j=j+1){
    digitalWrite(blueLEDPin, HIGH);
    delay(blueOnTime);
    digitalWrite(blueLEDPin, LOW);
    delay(blueOffTime);
  }

  digitalWrite(redLEDPin, HIGH);
  delay(redOnTime);
  digitalWrite(redLEDPin, LOW);
  delay(redOffTime);
}
