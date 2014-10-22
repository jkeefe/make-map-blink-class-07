#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMBER_OF_LEDS 1

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel gumdrops = Adafruit_NeoPixel(NUMBER_OF_LEDS, PIN, NEO_RGB + NEO_KHZ800);

void setup() {
  gumdrops.begin();
  gumdrops.show(); // Initialize all pixels to 'off'
}

void loop() {

  // color values are red, green, blue
  // each value can be 0-255
  uint32_t color = gumdrops.Color(50, 0, 0);

  // here, it's setPixelColor(LED#, COLOR)
  gumdrops.setPixelColor(0, color);
  
  // light 'em up!
  gumdrops.show();

}