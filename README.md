# Arduino Labs
### arduino_labs

## This project contains arduino guino uno basic programming.

### Requirements:
- Arduino Uno Basic Kit
- Windows PC or Linux computers
- Basic knowledge of C programming
- Basic knowledge of git usage

### Git commands
- git clone https://github.com/b4heart/arduino_labs.git
- git pull
- git add *
- git commit -m "some meaningful message"
- git pull
- git status

### NOTES from Getting started
-   open Source == everybody can use
-

  
### Notes from Arduino foundations
- Simple robot project
- A stands for anolog pins
- ~ stands for pulse width modulation signals (3, 5, 6, 9, 10, 11) - For running motors
- TX == Transmitter 
- RX == Receiver
- Microcontroller is a cheap and simple CPU == ATMega328T on Arduino Uno
- Arduino uno has 5v and 3.3v along with GND (ground or zero volts)
- 0-13 pins are ioputs in Uno
- 0 and 1 can also be used for TX and RX
- Anolog devices: Motor, Temperature and Light sensors
- Voltage: VIN == Voltage in (from external source like solar panel)
- Voltage: 5v or 3.3v provides output respectively
- GND  - common ground
- IDE: Write compile and upload
s in setup functionl. 
- IDE (integrated development enviornment): Use preferences to custom the look & feel
- Use File -> Examples to know pre-loaded examples
- Use Tools to link to the right Arduino and COM4 (connection)
- Codes are called as Sketch
- setup() -> runs only once. For input and outputs .. or for initializations
- loop() -> this code goes repeatedly, until powered off or conditionally exited. Usually, the real logic resides here.
- pinMode(pinname, input/output/input_pullup). Written in setup()
- digitalWrite(pin, HIGH/LOW)

