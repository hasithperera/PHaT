
void init_io() {

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  
  //Buzzer
  pinMode(A3, OUTPUT);

  //555 Trigger pin
  pinMode(7, INPUT);
  attachInterrupt(digitalPinToInterrupt(7), timer_function, CHANGE);
  count = 0;

}

void timer_function(){

  count++;

  
}