#include <Adafruit_NeoPixel.h>

#define PIN     6

Adafruit_NeoPixel strip = Adafruit_NeoPixel(2, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(PIN, OUTPUT);  // tells the program that this pin is for output
}

void loop() {
  digitalWrite(PIN, HIGH); // turn on LED
  }
