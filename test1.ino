const int redPin = 2;
const int greenPin = 3;
const int bluePin = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(255, 0, 0);
  delay(500);

  setColor(0, 255, 0);
  delay(1000);

  setColor(0, 0, 255);
  delay(2000);
}

void setColor(int redValue, int greenValue, int blueValue){
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
