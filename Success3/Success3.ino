#include <IRremote.h>
#include <OneWire.h>
#include <DallasTemperature.h>

const int IR_LED_PIN = 3;  // Pin connected to the IR LED
const int temperaturePin = 2;  // Data pin for DS18B20 temperature sensor

IRsend irsend(IR_LED_PIN);

OneWire oneWire(temperaturePin);
DallasTemperature sensors(&oneWire);
DeviceAddress temperatureDeviceAddress;

void setup() {
  Serial.begin(9600);
  sensors.begin();
  sensors.getAddress(temperatureDeviceAddress, 0);
  sensors.setResolution(temperatureDeviceAddress, 9); // 9-12 bit resolution
}

void loop() {
  sensors.requestTemperatures();
  float temperature = sensors.getTempC(temperatureDeviceAddress);

  if (temperature >= 27.0) {
    sendIRSignal("AC_ON_CODE");  // Replace with your AC's specific IR code for power on
  } else if (temperature <= 24.0) {
    sendIRSignal("AC_OFF_CODE"); // Replace with your AC's specific IR code for power off
  }
  delay(5000); // Delay for 5 seconds before taking another reading
}

void sendIRSignal(const char* irCode) {
  // Convert irCode to an unsigned long value, if necessary
  // Example: unsigned long irValue = 0xFFA25D;
  
  // Send the IR signal
  irsend.sendNEC(irValue, 32); // 32 bits
  delay(50); // Pause before sending another signal
}

