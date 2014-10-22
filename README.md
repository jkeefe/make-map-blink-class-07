#Make Map Blink 7: Pixel Power

We'll use Arduinos to play with special, colored LED's called Neopixels!

To get all of the files for this lesson, use the "Download Zip button over there --->"

###Files Used: 

Everything in the folder "live demo" (included in this repo).


###Quick intro

- Neopixels are cool, because you have full control of their color
- They can be chained
- You can pick the ONE in the chain you want to talk to
- Tons more info is available [in this guide from Adafruit](https://learn.adafruit.com/adafruit-neopixel-uberguide/overview)

##Let's go to the Library

Before we get started, we need to add the Neopixel library to your Arduino software. So let's do that!

This is taken directly from the Adafruit [instructions](https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library):

- Visit the [Adafruit_NeoPixel library](https://github.com/adafruit/Adafruit_NeoPixel) page at Github.com.
- Select the “Download ZIP” button, or simply [click this link](https://github.com/adafruit/Adafruit_NeoPixel/archive/master.zip) to download directly.
- Uncompress the ZIP file after it’s finished downloading.
- The resulting folder should contain the files “Adafruit_NeoPixel.cpp”, “Adafruit_NeoPixel.h” and an “examples” sub-folder. Sometimes in Windows you’ll get an intermediate-level folder and need to move things around.
- Rename the folder (containing the .cpp and .h files) to “Adafruit_NeoPixel” (with the underscore and everything), and place it alongside your other Arduino libraries, typically in your (home folder)/Documents/Arduino/Libraries folder. Libraries should not be installed alongside the Arduino application itself.
- Re-start the Arduino IDE if it’s currently running.

##Cooking with Breadboards

- Get a Neopixel "Gumdrop" (my term) from John. For reference, it's [one of these](https://www.adafruit.com/products/1734)
- Notice the flat side of the LED.
- Put the 4 legs into the first four holes in column "e" on your breadboard, with the flat side facing AWAY from the letter "e"
- The rows on that side of the center trough are all connected together (so holes a-e in row 1 are linked)
- Leave the first leg (in row 1) alone for a moment
- Use jumper wire to connect one of the holes in row 2 to the red + column on that side of the board. This will connect the second leg of the LED to power.
- Use jumper wire to connect one of the holes in row 3 to the black - column. This will connect the third leg of the LED to ground.
- Ignore the fourth leg for a moment.
- Use jumper wire to connet one of the holes in row 1 to the Digital 6 pin on your Arduino. That will be our data wire!
- Use jumper wire to connect one of the holes in the red + column to "+5V" on the Arduino, for power.
- Lastly,use jumper wire to connect one of the holes in the black + column to "GND" on the Arduino.

##Code it up

- Plug your Arduino into your computer, if you haven't already
- Be sure to link your computer to your board using:
	- Tools -> Board -> Arduino Uno
	- Tools -> Serial Port -> /dev/tty.usbmodem...
