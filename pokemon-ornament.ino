/**
 * Based on the NeoMatrix modules from Adafruit,
 * I've added some of my favorite Pokemon as ornaments for my christmas tree
 * Merry Christmas!
 */
#include <Adafruit_NeoPixel.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include "pokemon.h"

#define PIN 3  // Pin to which the input of the matrix is connected
#define PERIOD 3000  // Refreshes the ornament every 3 seconds

long time_ref;  // Used as a time reference

pokemon ornament(PIN);  // Creates a pokemon instance with the data pin as an argument
uint8_t ornamentNumber = 1; // This is where we initialize which pokemon to start on

void setup() 
{
    ornament.begin();  // Initializes the instance
    ornament.setOrnaments(ornamentNumber);  // Selects which ornaments to appear  
    time_ref = millis();  // Gets the temporal baseline
}

void loop() 
{
    if ( (unsigned long) (millis() - time_ref) > PERIOD ) 
    {
        // Chooses the next ornament in the list. Has a case for wrap around.
        if (ornamentNumber > 28) { ornamentNumber = 1;}

        ornament.setOrnaments(ornamentNumber++);  // Sets the new ornament
        time_ref = millis();
    }
    // Refreshes the drawing on the matrix.
    ornament.refresh();    
    delay(600);
}
