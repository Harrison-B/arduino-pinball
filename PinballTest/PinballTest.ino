// Teired & timed obstacle
const int teiredSensorOne = 13;
const int teiredSensorTwo = 11;
const int teiredSensorThree = 10;

bool teiredSensorOneState = LOW;
bool teiredSensorTwoState = LOW;
bool teiredSensorThreeState = LOW;

const int teiredLedOne = 8;

// Scoring variables
int totalScore = 0;

// Timing variables
int timeStart = 0;
int currentMillis = 0;

// Scoring Rules

/*
 * Give points for any target hit +10
 * Hit two of the teried obstacles in 10 seconds +20
 * Hit all three of teried obstacles in 10 seconds +50
 * 
 * Make it to the top of ramp +30
 * 
 */


void setup() {
  pinMode(teiredSensorOne, INPUT);
  pinMode(teiredSensorTwo, INPUT);
  
  pinMode(teiredLedOne, OUTPUT);
}

void manageTeirs() {
  if (teiredSensorOneState == HIGH) {
    digitalWrite(teiredLedOne, HIGH);
    totalPoints += 10;
    timeStart = currentMillis;
  }
}

void loop() {
  // master timing loop for measuring teried sensor
  currentMillis = millis();

  
  // read all sensors
  teiredSensorOneState = digitalRead(teiredSensorOne);
  teiredSensorTwoState = digitalRead(teiredSensorTwo);

  // run obstacle functions
  manageTeirs();

  // serialOut score
  
}
