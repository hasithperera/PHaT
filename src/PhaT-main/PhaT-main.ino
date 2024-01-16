
// Global variables

int count = 0;


void setup() {
  // put your setup code here, to run once:

  init_io();
  Serial.begin(115200);
  Serial.println("PHaT - Start");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(count);
  digitalWrite(A0, HIGH);
  delay(1000);
  digitalWrite(A0, LOW);
  delay(1000);
  count = 0;

}
