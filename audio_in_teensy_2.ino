#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

//teensy 2
AudioOutputUSB usb_to;
AudioInputI2Sslave i2s_from;
AudioConnection patchCord_in3(i2s_from, 0, usb_to ,0);
AudioConnection patchCord_in4(i2s_from, 1, usb_to, 1)

void setup() {
  AudioMemory(128);
}

void loop(){

}
