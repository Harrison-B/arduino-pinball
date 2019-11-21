const int FSR = A0;
const int FSR2 = A1;

int score = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(FSR, INPUT)
  pinMode(FSR2, INPUT)
  Serial.begin(9600)

}

void loop() {
  // put your main code here, to run repeatedly:
  pressure = analogRead(FSR)
  hit = map(pressure, 0, 1023, 0, 255) //change based on Sensor Reading

  if(hit > 20){
    score = score + 20
  }
  

  
  Serial.println(score)
}
