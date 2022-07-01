/****************************
 * IO pins of the Robot
 ***************************/
const int LEFT_MOTOR_PIN_1  = 7;
const int LEFT_MOTOR_PIN_2  = 6;
const int RIGHT_MOTOR_PIN_2 = 5;
const int RIGHT_MOTOR_PIN_1 = 4;
/****************************
 * Function declarations
 ***************************/
void setIOpins();
void robotForward();
void robotStop();
void robotLeft();
void robotRight();
void robotBackward();
/****************************
 * Function definitions
 ***************************/
void setIOpins(){
  pinMode( LEFT_MOTOR_PIN_1, OUTPUT);
  pinMode( LEFT_MOTOR_PIN_2, OUTPUT);
  pinMode(RIGHT_MOTOR_PIN_1, OUTPUT);
  pinMode(RIGHT_MOTOR_PIN_2, OUTPUT);
}
void robotForward(){
  digitalWrite( LEFT_MOTOR_PIN_1, LOW);
  digitalWrite( LEFT_MOTOR_PIN_2, HIGH);
  digitalWrite(RIGHT_MOTOR_PIN_1, LOW);
  digitalWrite(RIGHT_MOTOR_PIN_2, HIGH);
}
void robotStop(){
  digitalWrite( LEFT_MOTOR_PIN_1, LOW);
  digitalWrite( LEFT_MOTOR_PIN_2, LOW);
  digitalWrite(RIGHT_MOTOR_PIN_1, LOW);
  digitalWrite(RIGHT_MOTOR_PIN_2, LOW);
}
void robotLeft(){
  digitalWrite( LEFT_MOTOR_PIN_1, LOW);
  digitalWrite( LEFT_MOTOR_PIN_2, LOW);
  digitalWrite(RIGHT_MOTOR_PIN_1, LOW);
  digitalWrite(RIGHT_MOTOR_PIN_2, HIGH);
}
void robotRight(){
  digitalWrite( LEFT_MOTOR_PIN_1, LOW);
  digitalWrite( LEFT_MOTOR_PIN_2, HIGH);
  digitalWrite(RIGHT_MOTOR_PIN_1, LOW);
  digitalWrite(RIGHT_MOTOR_PIN_2, LOW);
}
void robotBackward(){
  digitalWrite( LEFT_MOTOR_PIN_1, HIGH);
  digitalWrite( LEFT_MOTOR_PIN_2, LOW);
  digitalWrite(RIGHT_MOTOR_PIN_1, HIGH);
  digitalWrite(RIGHT_MOTOR_PIN_2, LOW);
}
