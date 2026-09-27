const int dataPin = 11;
const int clockPin = 12;
const int latchPin = 8;
const int motor1A = 2;
const int motor1B = 3;
const int motor2A = 4;
const int motor2B = 5;
const int motor3A = 6;
const int motor3B = 7;
const int motor4A = 10; 
const int motor4B = 9;
const int motor5A = 6;
const int motor5B = 7;
const int motor6A = 10; 
const int motor6B = 9;
unsigned long lastMotorToggle = 0;
bool motorDirectionForward = true;

void setup() {
  Serial.begin(9600);
  Serial.println("--- MAXIMUM LOAD TEST ---");
  Serial.println("ALL 8 Nozzles and ALL 4 Motors are locked ON!");

  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);

  pinMode(motor1A, OUTPUT); pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT); pinMode(motor2B, OUTPUT);
  pinMode(motor3A, OUTPUT); pinMode(motor3B, OUTPUT);
  pinMode(motor4A, OUTPUT); pinMode(motor4B, OUTPUT);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, 255); 
  digitalWrite(latchPin, HIGH);
  Serial.println("[SYSTEM STATUS]: ALL 8 NOZZLES ON");
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - lastMotorToggle >= 3000) {
    lastMotorToggle = currentMillis;
    motorDirectionForward = !motorDirectionForward; 
    
    if (motorDirectionForward) {
      Serial.println("[SYSTEM STATUS]: ALL MOTORS SPINNING FORWARD");
      setAllMotors(HIGH, LOW);
    } else {
      Serial.println("[SYSTEM STATUS]: ALL MOTORS SPINNING BACKWARD");
      setAllMotors(LOW, HIGH);
    }
  }
}
void setAllMotors(int stateA, int stateB) {
  digitalWrite(motor1A, stateA); digitalWrite(motor1B, stateB);
  digitalWrite(motor2A, stateA); digitalWrite(motor2B, stateB);
  digitalWrite(motor3A, stateA); digitalWrite(motor3B, stateB);
  digitalWrite(motor4A, stateA); digitalWrite(motor4B, stateB);
}
