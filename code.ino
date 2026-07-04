// Security System using Ultrasonic + LDR + Buzzer

const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 8;
const int ldrPin = A0;

long duration;
int distance;
int ldrValue;

int lightThreshold = 500;   // Adjust if needed
int detectDistance = 20;    // cm

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // Read LDR
  ldrValue = analogRead(ldrPin);

  // Measure distance
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("LDR = ");
  Serial.print(ldrValue);

  Serial.print("  Distance = ");
  Serial.print(distance);
  Serial.println(" cm");

  // Activate only at night
  if (ldrValue < lightThreshold) {

    // Person detected
    if (distance <= detectDistance) {

      tone(buzzer, 1000);     // Alarm ON

    }
    else {

      noTone(buzzer);          // No person
    }

  }
  else {

    noTone(buzzer);            // Daytime
  }

  delay(200);
}