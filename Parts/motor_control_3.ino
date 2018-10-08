int pwmPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(pwmPin,OUTPUT);
  analogWrite(pwmPin, 150);
  delay(300);
}

void loop () {
  int potValue = analogRead(A0);

  int newpotValue = map(potValue, 0, 1023, 255,
  0);

  
  analogWrite(pwmPin, newpotValue);
  
  Serial.println(map(newpotValue,0,255,100,0));
}

