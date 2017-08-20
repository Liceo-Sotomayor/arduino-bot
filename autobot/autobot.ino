//Testing the DC Motors
//Define Pins
//Motor A
int enableA = 10;
int pinA1 = 2;
int pinA2 = 3;
//Motor B
int enableB = 9;
int pinB1 = 4;
int pinB2 = 5;
int led = 13;

void setup() {
  Serial.begin (9600);
  //configure pin modes
  pinMode (enableA, OUTPUT);
  pinMode (pinA1, OUTPUT);
  pinMode (pinA2, OUTPUT);
  pinMode (enableB, OUTPUT);
  pinMode (pinB1, OUTPUT);
  pinMode (pinB2, OUTPUT);
  pinMode (led, OUTPUT);
}

void loop() {
  //enabling motor A
  Serial.println ("Enabling Motor A");
  digitalWrite (enableA, HIGH);
  Serial.println ("Enabling Motor B");
  digitalWrite (enableB, HIGH);
  //do something
  //forward
  digitalWrite (pinA1, LOW);
  digitalWrite (pinA2, HIGH);
  digitalWrite (pinB1, LOW);
  digitalWrite (pinB2, HIGH);
  //5s forward
  delay (10000);
  digitalWrite (pinA1, HIGH);
  digitalWrite (pinA2, LOW);
  digitalWrite (pinB1, LOW);
  digitalWrite (pinB2, HIGH);
//  //5s forward
  delay (1000);
  digitalWrite (pinA1, HIGH);
  digitalWrite (pinA2, LOW);
  digitalWrite (pinB1, HIGH);
  digitalWrite (pinB2, LOW);
//  //5s backwards
//  delay 0(1000);
//  digitalWrite (pinA1, LOW);
//  digitalWrite (pinA2, HIGH);
//  digitalWrite (pinB1, HIGH);
//  digitalWrite (pinB2, LOW);
  //5s backwards
  delay (10000);
  digitalWrite (pinA1, HIGH);
  digitalWrite (pinA2, LOW);
  digitalWrite (pinB1, LOW);
  digitalWrite (pinB2, HIGH);
//  //5s forward
  delay (1000);
  digitalWrite (enableA, LOW);
  digitalWrite (enableB, LOW);
  delay (1000);
}
