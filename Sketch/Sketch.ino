void setup() {
  // put your setup code here, to run once:

pinMode(1,OUTPUT); //Pitch is output
pinMode(5, OUTPUT); //Gate is output
//Setup Timer1 to do PWM DAC for Pitch
TCCR1 = _BV(PWM1A) | _BV(COM1A1) | _BV(CS10);
GTCCR = 0;
OCR1C = 239;
OCR1A = 0; //Set initial Pitch to C2
digitalWrite(5,LOW); //Set initial Gate to LOW;
}

void loop() {
  // put your main code here, to run repeatedly:

}
