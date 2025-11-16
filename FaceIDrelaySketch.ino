const int relayPin = 8;  // Change to pin that you have relay connected to
const int timehigh = 1500; //Change this to amount of time it takes to start car
void setup() {
  Serial.begin(9600);   pinMode(relayPin, OUTPUT);  
  digitalWrite(relayPin, LOW);  // Start with relay off
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');  // Read the incoming string until newline
    command.trim();  // Remove any whitespace
    if (command == "ON") {
      digitalWrite(relayPin, HIGH);  // Turn relay on
      delay(timehigh);  
      digitalWrite(relayPin, LOW);  // Turn relay off
    }
  }
}