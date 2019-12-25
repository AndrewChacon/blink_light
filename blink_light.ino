int blueLEDPin=9;
int blueOnTime=250;
int blueOffTime=500;
int numBlueBlink=2;

int redLEDPin=10;
int redOnTime=500;
int redOffTime=250;
int numRedBlink=3;

void setup() {
  // put your setup code here, to run once:

  pinMode(blueLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int j=0; j<numBlueBlink; j=j+1) {
    digitalWrite(blueLEDPin, HIGH); // Turn the blue LED on
    delay(blueOnTime);              // Wait
    digitalWrite(blueLEDPin, LOW);  // Turn the blue LED off
    delay(blueOffTime);             // Wait
  }

  for (int j=0; j<numRedBlink; j=j+1) {
    digitalWrite(redLEDPin, HIGH); // Turn the red LED on
    delay(redOnTime);              // Wait
    digitalWrite(redLEDPin, LOW);  // Turn the red LED off
    delay(redOffTime);             // Wait
  }
  
}
