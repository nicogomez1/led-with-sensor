#define LED_PIN 13

// HC-SR04
int trig = 6;
int echo = 5;

int time;
int distance;


void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  time = pulseIn(echo, HIGH);
  distance = time * 0.034 / 2;
  if (distance < 4){
    digitalWrite(LED_PIN, HIGH);
    }
  else {
    digitalWrite(LED_PIN, LOW);
  }
}
