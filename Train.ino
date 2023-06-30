const int trigPin = 9;
const int echoPin = 10;
const int relayPin = 7;
long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  pinMode(relayPin, OUTPUT);
}
void loop() {
  delay(100);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  if( distance <= 7 ){
    digitalWrite(relayPin,!LOW);
  }
  else{
    digitalWrite(relayPin,!HIGH);
  }
}
