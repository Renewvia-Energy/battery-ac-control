# Automatic AC control

## Goal
The goal of this project is to create an Arduino-based system that provides automated control over an air conditioning (AC) unit, enhancing both comfort and energy efficiency. By combining an infrared (IR) LED, temperature sensor, and an Arduino Uno, this project aims to enable the AC unit to respond intelligently to environmental conditions. The IR LED is used to send specific commands to the AC unit, such as turning it on or off, while the temperature sensor continuously monitors the ambient temperature. The system is designed to automatically activate the AC unit when the temperature exceeds a predefined threshold and turn it off once the desired temperature is reached, thereby maintaining a comfortable environment and conserving energy. This project not only showcases the potential of DIY automation but also contributes to reducing energy consumption and lowering electricity costs, aligning with the broader goals of sustainability and smart home technology.

## Methods

## Hardware
![circuit diagram](/circuit-diagram/CIRCUIT1.png)

## Components
| Selected hardware         | implementation     |
|--------------|-----------|
| Computer | Arduino Uno      |
| IR receiver     | HX 1838 module  |
| Temperature sensor | LM 35 |
| IR LED | 5pi LED |
## Software
All of the software work was done through arduino IDE 2.2.1 with additional arduino library "IRremote", "OneWire", and "DallasTemperature"

## Installation Guide

Install Arduino library from Arduino IDE through following procedures
Sketch > Include library > Manage library

Instal following libraries
- IRremote
- OneWire
- DallasTemperature

Upload the code named "Success 1" to the CIRCUIT1 diagram setup.

Test out if the IR reciver accepts the IR signal by the red LED from the sensor.

Run the code and open serial monitor. Check if the sensor correctly reads the signal.

Then replace the "AC_ON_CODE" and "AC_OFF_CODE" from the recieved IR code from Success3 code. Upload the replaced code to CIRCUIT2 diagram setup.

Change the on and off temperature which is initially set to 27 and 24 degrees in lines 25 and 27 to personal taste.



