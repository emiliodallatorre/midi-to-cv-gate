#include <DigiMIDI.h>

DigiMIDIDevice midi;

void setup() {
  pinMode(9, OUTPUT); // Pitch is output.
  pinMode(3, OUTPUT); // Gate is output.

  // Setup Timer1 to do PWM DAC for Pitch.
  TCCR1A = _BV(COM1A1) | _BV(CS10);
  GTCCR = 0;
  OCR1B = 239;
  OCR1A = 0; // Set initial Pitch to C2.
  digitalWrite(3, LOW); // Set initial Gate to LOW.
}

void loop() {
  midi.update(); // Check if any MIDI data is received.
}
