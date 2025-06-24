void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
}

void loop() {
  int sensor=analogRead(A0); // Incoming analog  signal read and appointed sensor
  Serial.println(sensor);
}
