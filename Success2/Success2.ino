#include <IRremote.h>

const int IR_LED_PIN = 3;  // Pin connected to the IR LED (change to the desired pin)

IRsend irsend(IR_LED_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Send the "A90" IR signal using the NEC protocol
  unsigned int irSignal[] = {0x4B12, 0x21DE};  // Replace with the correct IR codes for your AC remote

  irsend.sendNEC(irSignal, sizeof(irSignal) / sizeof(unsigned int));
  
  Serial.println("IR signal sent: A90");
  
  delay(5000);  // Wait for 5 seconds before sending the signal again
}

