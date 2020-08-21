# DHT22-Thermometer

This thermometer idea came to me when my little sister asked me “Vince, what’s the temperature?” Answering I said, “Well, I’ll look it up.” So I looked it up but that wasn’t enough for her, This continued for a few days. She then wanted the humidity as well as the temperature and so I decided to build this:


– Finished Build –
A very basic, but effective ‘meter’ that can measure temperature and humidity with a refresh rate of 2 times per/second. It uses the DHT22 sensor for its accuracy and easy to use libraries.

The Prototype:
Parts Required:

1x 16 x 2 Character LCD 
1x DHT22 temperature and humidity sensor
1 x 10K Trimpot (PCB mount)
1x 330 Ω Resistor 
1 x Breadboard and prototyping hardware (Jumper wires, Breadboard power supply, etc.)
1 x Arduino Pro Mini (5 volt Microcontroller) 
Follow the Fritzing diagram below for the breadboard circuit:


– Fritzing Diagram –
NOTE: You’ll notice in the Fritzing diagram that the DHT22 sensor has only 3 of the 4 leads connected to the circuit; this isn’t a mistake it is meant to be like that.

Once the Breadboard Circuit is built you can continue onto the code.

Uploading The Code
You can download the code, 3D Print files, DHT22 Library and notes from my Github page or Here.
You will also need a copy of the Arduino IDE coding environment which can be found here: https://www.arduino.cc/en/Main/Software

Main Build
There isn’t much difference between the main build and the prototype the only difference being that we solder the whole project onto a Adafruit Half-sized Breadboard PCB and house it in a 3d printed case.

Extra Parts Required:
All the components from the prototype build. 

PLUS:

1 x 9 volt Battery clip
1 x 9 volt Battery
1 x Pushbutton latching or 1 x toggle switch
5 x M3 Hex Nuts
2 x M3 10mm bolts
2 x M3 14mm Bolts
1 x M3 7mm Bolt (Optional – you can use any other size above 7mm)
Solder all the components to the Breadboard PCB following the same circuit as the prototype (the LCD and DHT22 sensor need to be attached to the PCB via jumper wires so it can be mounted in the case.

Note: The 9 volt battery clip wires and switch/pushbutton need to be soldered as in the fritzing diagram below:


When you’ve soldered up the Breadboard PCB you can continue onto the enclosure.

Enclosure
For the enclosure you will need the M3 nuts and bolts listed above as well as your 3d printed enclosure and soldered up breadboard PCB.

Start by removing supports from the 3d printed case
Then mount the LCD display inside front of the case.
 Tighten the bolts and nuts.
Mount the DHT22 sensor on the side of the case with an M3 bolt and nut.
Mount the switch/pushbutton on the opposite side to the DHT sensor.
Add the PCB, Battery, ETC, to the inside of the case: NOTE: I put a piece of paper on top of the battery to stop shorts amongst the pins on the PCB.
Put the lid/bottom on the top of the case so i looks like this:

Finished Thermometer

side view of the thermometer

all the electronics inside the thermometer

bottom/side view of the thermometer
NOTE: My Base_4_case.stl part didn’t fit to well so I added a few pieces of blu tack the edges of the part to hold it in place better.
Whether you need this will depend on your 3d printers tolerances.

And your all done!

Power it up and read the temperature and humidity! Cool!!
