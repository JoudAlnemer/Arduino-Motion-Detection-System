const int trigPin = 7;
const int echoPin = 6;

const int pinClose = 2;
const int pinMiddle = 3;
const int pinFar = 4;

long duration;
float distance;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

pinMode(pinClose, OUTPUT);
pinMode(pinMiddle, OUTPUT);
pinMode(pinFar, OUTPUT);

Serial.begin(9600);
}

void loop() {
// Send ultrasonic pulse
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);

digitalWrite(trigPin, LOW);

// Measure echo duration
duration = pulseIn(echoPin, HIGH);

// Calculate distance in centimeters
distance = duration * 0.0343 / 2;

Serial.print(“Distance: “);
Serial.print(distance);
Serial.println(” cm”);

// Reset all outputs
digitalWrite(pinClose, LOW);
digitalWrite(pinMiddle, LOW);
digitalWrite(pinFar, LOW);

// Activate output based on distance
if (distance < 50) {
digitalWrite(pinClose, HIGH);
}
else if (distance >= 50 && distance <= 150) {
digitalWrite(pinMiddle, HIGH);
}
else if (distance > 150) {
digitalWrite(pinFar, HIGH);
}

delay(200);
}
