#include <Servo.h>

Servo armServo;

void setup() {
  // Wählen Sie einen geeigneten Pin für den ESP32
  armServo.attach(12); // Beispiel: Pin 12
  armServo.write(90);

  // Wählen Sie einen analogen Eingangspin für den ESP32
  pinMode(34, INPUT); // Beispiel: Pin 34 für den Abstandssensor

  // Wählen Sie geeignete Pins für LEDs
  pinMode(2, OUTPUT); // Beispiel: Pin 2 für eine eingebaute LED
  pinMode(4, OUTPUT); // Beispiel: Pin 4 für zusätzliche LED
  pinMode(5, OUTPUT); // Beispiel: Pin 5 für zusätzliche LED
}

int sensorValue = 0;
int prevSensorValue = 0;
const int THRESHOLD = 360;

void loop() {
  sensorValue = analogRead(34); // Lesen des Abstandssensors

  if (prevSensorValue <= THRESHOLD) {
    if (sensorValue > THRESHOLD) {
      action();
    }
  }

  prevSensorValue = sensorValue;
  delay(10);
}

void action() {
  led(true);
  delay(1000);

  armServo.attach(12);
  armServo.write(10);
  delay(300);
  armServo.write(70);
  delay(500);

  delay(100);
  // Fügen Sie hier Ihre "Nach dem Essen"-Sequenz ein

  armServo.detach();
  led(false);
}

void led(bool onOff) {
  if (onOff) {
    digitalWrite(2, HIGH); // Eingebaute LED auf dem ESP32
    digitalWrite(4, LOW);  // Zusätzliche LEDs
    digitalWrite(5, LOW);
  } else {
    digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  }
}
