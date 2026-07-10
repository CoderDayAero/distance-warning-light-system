const int trigPin = 9;
const int echoPin = 10;

const int greenLED = 2;
const int yellowLED = 3;
const int redLED = 4;

const int buzzer = 5;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);


  duration = pulseIn(echoPin, HIGH);


distance = duration * 0.0343 / 2;

if (distance == 0 || distance > 400) {
  distance = 400;
}

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 40) {


    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);

    noTone(buzzer);

  } 
  else if (distance > 20) {


    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);

    tone(buzzer, 300);
    delay(250);
    noTone(buzzer);
    delay(250);

  } 
  else {


    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);

    tone(buzzer, 200);
    delay(75);
    noTone(buzzer);
    delay(75);

  }
}