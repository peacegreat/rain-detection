#define RAIN_SENSOR_PIN 2 // Pin connected to the rain sensor
#define BUZZER_PIN 3       // Pin connected to the buzzer
#define LED_PIN 4          // Pin connected to the LED

void setup() {
  pinMode(RAIN_SENSOR_PIN, INPUT); // Set rain sensor pin as input
  pinMode(BUZZER_PIN, OUTPUT);      // Set buzzer pin as output
  pinMode(LED_PIN, OUTPUT);          // Set LED pin as output
  Serial.begin(9600);
}

void loop() {
  int rainDetected = digitalRead(RAIN_SENSOR_PIN); // Read the rain sensor

  if (rainDetected == HIGH) { // Water detected
    digitalWrite(BUZZER_PIN, LOW); // Turn on buzzer
    digitalWrite(LED_PIN, LOW);     // Turn on LED
    Serial.println("No water detected!"); // Debug message
  } else {
    digitalWrite(BUZZER_PIN, HIGH);   // Turn off buzzer
    digitalWrite(LED_PIN, HIGH);      // Turn off LED
    Serial.println("Water detected."); // Debug message
  }

  delay(100); // Short delay for stability
}
