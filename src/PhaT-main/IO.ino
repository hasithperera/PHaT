
void init_io() {

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  
  //Buzzer
  pinMode(A3, OUTPUT);

  //555 Trigger pin
  count = 0;
  pinMode(3, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(3), timer_function, RISING);


}

void timer_function(){
    //Serial.println(">");
    count++;
}