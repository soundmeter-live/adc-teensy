//#include <LiquidCrystal.h> 
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
// inclouded for led screem
AudioOutputUSB usb_to;
AudioInputI2SQuad i2s_from;
AudioOutputI2S i2s_to;

AudioConnection patchCord_in(i2s_from, 0, i2s_to, 0);
AudioConnection patchCord_in2(i2s_from, 2,i2s_to ,1);
//AudioConnection patchCord_in3(i2s_from, 0, usb_to ,0);
//AudioConnection patchCord_in4(i2s_from, 3, usb_to, 1)

//teensy 2
AudioOutputUSB usb_to;
AudioInputI2Sslave i2s_from;
AudioConnection patchCord_in3(i2s_from, 0, usb_to ,0);
AudioConnection patchCord_in4(i2s_from, 1, usb_to, 1)

//AudioControlSGTL5000 controller; // controller 
//RS pin to 33 
//Enable to 34
//D4 to 32
//D5 to 31
//D6 to 30
//D7 to 29

/*
int  sensorAnalogPin = A0;    // Select the Arduino input pin to accept the Sound Sensor's analog output 
int  sensorDigitalPin = 7;    // Select the Arduino input pin to accept the Sound Sensor's digital output
int  analogValue = 0;         // Define variable to store the analog value coming from the Sound Sensor
int  digitalValue;            // Define variable to store the digital value coming from the Sound Sensor       
pin connections needed for lcd

LiquidCrystal lcd(33,34,35, 36,37,38);
lcd.begin(16, 2); *figure correct argunent*

sample configure to light up lcd. 1= on, 0 = off create if statement for is souynd detecterde, light lcd.
byte heart[8] = { 
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
};

lcd.createChar(0, heart);
  lcd.print("I ");
  lcd.write(byte(0)); // when calling lcd.write() '0' must be cast as a byte
  lcd.print(" Arduino! ");
  lcd.write((byte) 1);
 */  

void setup() {
  AudioMemory(128);

  //controller.enable();

  //controller.inputSelect(AUDIO_INPUT_MIC);
 // controller.micGain(46);

/*sample configure to light up lcd. 1= on, 0 = off create if statement for is souynd detecterde, light lcd.
byte heart[8] = { 
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
  0b11111,
};

lcd.createChar(0, heart);
  lcd.print("I ");
  lcd.write(byte(0)); // when calling lcd.write() '0' must be cast as a byte
  lcd.print(" Arduino! ");
  lcd.write((byte) 1);
 */  
}

void loop() {
  // read the PC's volume setting
  // float vol = usb_from.volume();

  // if (vol > 0) {
  //   vol = 0.3 + vol * 0.5;
  // }
/*
  int sensorReading = analogRead(A0);
  // map the result to 200 - 1000:
  int delayTime = map(sensorReading, 0, 1023, 200, 1000);
  // set the cursor to the bottom row, 5th position:
  lcd.setCursor(4, 1);
  // draw the little man, arms down:
  lcd.write(3);
  delay(delayTime);
  lcd.setCursor(4, 1);
  // draw him arms up:
  lcd.write(4);
  delay(delayTime);
  controller.volume(vol);

  delay(100);*/
}
