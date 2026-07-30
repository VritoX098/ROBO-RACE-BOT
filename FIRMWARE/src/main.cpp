#include <BluetoothSerial.h>
#include <Arduino.h>

const int IN1 = 13;
const int IN2 = 12;
const int IN3 = 14;
const int IN4 = 27;
const int ENA = 25;
const int ENB = 26;

BluetoothSerial SerialBT;
int motorSpeed = 180;
bool isMoving = false;

void moveForward(int speed);
void moveBackward(int speed);
void turnLeft(int speed);
void turnRight(int speed);
void stopMotors();
void setMotorSpeed(int leftPwm, int rightPwm);
void handleBluetoothCommand(char cmd);

void setup() {
  Serial.begin(115200);
  Serial.println("4WD Robot starting...");

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  SerialBT.begin("ESP32_Robot");
  Serial.println("Bluetooth ready. Pair with 'ESP32_Robot'");

  stopMotors();
}

void loop() {
  if (SerialBT.available()) {
    char cmd = SerialBT.read();
    if (cmd == '\n' || cmd == '\r') return;
    handleBluetoothCommand(cmd);
    Serial.print("Command received: ");
    Serial.println(cmd);
  }
  delay(10);
}

void setMotorSpeed(int leftPwm, int rightPwm) {
  leftPwm = constrain(leftPwm, 0, 255);
  rightPwm = constrain(rightPwm, 0, 255);
  analogWrite(ENA, leftPwm);
  analogWrite(ENB, rightPwm);
}

void moveForward(int speed) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  setMotorSpeed(speed, speed);
  isMoving = true;
}

void moveBackward(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  setMotorSpeed(speed, speed);
  isMoving = true;
}

void turnLeft(int speed) {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  setMotorSpeed(speed, speed);
  isMoving = true;
}

void turnRight(int speed) {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  setMotorSpeed(speed, speed);
  isMoving = true;
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  isMoving = false;
}

void handleBluetoothCommand(char cmd) {
  if (cmd >= '0' && cmd <= '9') {
    int newSpeed = map(cmd - '0', 0, 9, 0, 230);
    motorSpeed = newSpeed;
    Serial.print("Speed set to: ");
    Serial.println(motorSpeed);
    return;
  }

  switch (cmd) {
    case 'F':
      moveForward(motorSpeed);
      break;
    case 'B':
      moveBackward(motorSpeed);
      break;
    case 'L':
      turnLeft(motorSpeed);
      break;
    case 'R':
      turnRight(motorSpeed);
      break;
    case 'S':
      stopMotors();
      break;
    default:
      Serial.println("Unknown command");
      break;
  }
}
