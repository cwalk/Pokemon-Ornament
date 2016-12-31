#include "pokemon.h"
#include <stdlib.h>

#ifndef PSTR
#define PSTR // For Arduino Due
#endif

// Creates an instance, and initializes the instance variables
pokemon::pokemon(uint8_t pin)
{
    matrix = new Adafruit_NeoMatrix(8, 8, pin,
                                    NEO_MATRIX_TOP     + NEO_MATRIX_LEFT +
                                    NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
                                    NEO_GRB            + NEO_KHZ800);

    _ornaments = BULBASAUR;
}

// Gets the instance set up and ready for use
void pokemon::begin(uint8_t brightness)
{
    matrix->begin();
    matrix->setBrightness(brightness);
    matrix->fillScreen(0);  // Clears the matrix
    matrix->show();
}

// Sets the brightness of the NeoPixels. Range: [0,255]
void pokemon::setBrightness(uint8_t brightness)
{
    matrix->setBrightness(brightness);
}

// Selects the ornaments to be drawn on the matrix
void pokemon::setOrnaments(uint8_t ornaments)
{
    _ornaments = ornaments;
}

// Refreshes the drawn ornament
void pokemon::refresh()
{
    matrix->fillScreen(0); 
    uint8_t ornament = _ornaments;
    {
        switch (ornament)
        {
            case 1:
                drawBulbasaur();
                break;
            case 2:
                drawIvysaur();
                break;
            case 3:
                drawVenusaur();
                break;
            case 4:
                drawCharmander();
                break;
            case 5:
                drawCharmeleon();
                break;
            case 6:
                drawCharizard();
                break;
            case 7:
                drawSquirtle();
                break;
            case 8:
                drawWartortle();
                break;
            case 9:
                drawBlastoise();
                break;
            case 10:
                drawPikachu();
                break;
            case 11:
                drawRaichu();
                break;
            case 12:
                drawJynx();
                break;
            case 13:
                drawElectabuzz();
                break;
            case 14:
                drawMagmar();
                break;
            case 15:
                drawMagikarp();
                break;
            case 16:
                drawGyrados();
                break;
            case 17:
                drawLapras();
                break;
            case 18:
                drawVaporeon();
                break;
            case 19:
                drawJolteon();
                break;
            case 20:
                drawFlareon();
                break;
            case 21:
                drawArticuno();
                break;
            case 22:
                drawZapdos();
                break;
            case 23:
                drawMoltres();
                break;
            case 24:
                drawDratini();
                break;
            case 25:
                drawDragonair();
                break;
            case 26:
                drawDragonite();
                break;
            case 27:
                drawMewtwo();
                break;
            case 28:
                drawMew();
                break;
        }
    }
    matrix->show();
}

// Updates the ornament and refreshes the drawing
void pokemon::refresh(uint8_t ornaments)
{
    _ornaments = ornaments;
    refresh();
}

void pokemon::drawBulbasaur()
{
    uint16_t lightBlue = matrix->Color(98, 213, 180),
    blue = matrix->Color(57, 148, 148),
    lightGreen = matrix->Color(164, 213, 66),
    green = matrix->Color(116, 171, 48);
    
    matrix->drawPixel(4, 4, lightGreen);
    matrix->drawPixel(4, 5, green);
    matrix->drawPixel(5, 2, lightBlue);
    matrix->drawPixel(5, 3, blue);
    matrix->drawPixel(5, 4, green);
    matrix->drawPixel(5, 5, green);
    matrix->drawFastVLine(6, 2, 4, blue);
    matrix->drawPixel(7, 3, blue);
    matrix->drawPixel(7, 5, blue);
}

void pokemon::drawIvysaur()
{
  uint16_t lightRose = matrix->Color(255, 123, 123),
  rose = matrix->Color(213, 65, 90),
  lightGreen = matrix->Color(106, 180, 32),
  darkGreen = matrix->Color(74, 139, 33),
  blue = matrix->Color(90, 205, 147),
  darkBlue = matrix->Color(32, 148, 91);

  matrix->drawPixel(2, 3, lightRose);
  matrix->drawPixel(2, 4, rose);
  matrix->drawPixel(3, 1, lightGreen);
  matrix->drawFastVLine(3, 3, 2, rose);
  matrix->drawPixel(3, 6, lightGreen);
  matrix->drawPixel(4, 1, darkGreen);
  matrix->drawFastVLine(4, 2, 2, lightGreen);
  matrix->drawFastVLine(4, 4, 3, darkGreen);
  matrix->drawPixel(5, 2, darkGreen);
  matrix->drawFastVLine(5, 3, 2, blue);
  matrix->drawPixel(5, 5, darkGreen);
  matrix->drawFastVLine(6, 2, 3, blue);
  matrix->drawPixel(6, 5, darkBlue);
  matrix->drawPixel(7, 1, darkBlue);
  matrix->drawFastVLine(7, 3, 2, darkBlue);
  matrix->drawPixel(7, 6, darkBlue);
}

void pokemon::drawVenusaur()
{
  uint16_t lightRose = matrix->Color(255, 130, 115),
  rose = matrix->Color(222, 65, 66),
  yellow = matrix->Color(222, 189, 41),
  brown = matrix->Color(131, 49, 0),
  lightGreen = matrix->Color(106, 189, 74),
  darkGreen = matrix->Color(57, 139, 40),
  blue = matrix->Color(82, 205, 172),
  darkBlue = matrix->Color(32, 141, 117);

  matrix->drawFastVLine(0, 1, 2, rose);
  matrix->drawFastVLine(0, 5, 2, rose);
  matrix->drawFastVLine(1, 0, 2, lightRose);
  matrix->drawPixel(1, 2, rose);
  matrix->drawFastVLine(1, 3, 2, yellow);
  matrix->drawPixel(1, 5, rose);
  matrix->drawFastVLine(1, 6, 2, lightRose);
  matrix->drawFastVLine(2, 0, 2, rose);
  matrix->drawPixel(2, 2, lightRose);
  matrix->drawFastVLine(2, 3, 2, rose);
  matrix->drawPixel(2, 5, lightRose);
  matrix->drawFastVLine(2, 6, 2, rose);
  matrix->drawFastVLine(3, 1, 2, rose);
  matrix->drawFastVLine(3, 3, 2, brown);
  matrix->drawFastVLine(3, 5, 2, rose);
  matrix->drawPixel(4, 1, lightGreen);
  matrix->drawFastVLine(4, 2, 4, darkGreen);
  matrix->drawPixel(4, 6, lightGreen);
  matrix->drawPixel(5, 0, lightGreen);
  matrix->drawPixel(5, 1, blue);
  matrix->drawPixel(5, 2, darkBlue);
  matrix->drawFastVLine(5, 3, 2, lightGreen);
  matrix->drawPixel(5, 5, blue);
  matrix->drawPixel(5, 6, darkBlue);
  matrix->drawPixel(5, 7, lightGreen);
  matrix->drawPixel(6, 1, darkBlue);
  matrix->drawFastVLine(6, 2, 3, blue);
  matrix->drawFastVLine(6, 5, 2, darkBlue);
  matrix->drawPixel(7, 0, darkBlue);
  matrix->drawFastVLine(7, 2, 4, darkBlue);
  matrix->drawPixel(7, 7, darkBlue);
}

void pokemon::drawCharmander()
{
  uint16_t lightOrange = matrix->Color(255, 148, 65),
  orange = matrix->Color(251, 105, 69),
  yellow = matrix->Color(255, 212, 8),
  beige = matrix->Color(255, 213, 123),
  darkBeige = matrix->Color(230, 172, 90);

  matrix->drawFastVLine(3, 3, 2, lightOrange);
  matrix->drawPixel(4, 3, lightOrange);
  matrix->drawPixel(4, 4, orange);
  matrix->drawPixel(5, 2, lightOrange);
  matrix->drawPixel(5, 3, beige);
  matrix->drawPixel(5, 4, darkBeige);
  matrix->drawPixel(5, 5, orange);
  matrix->drawPixel(5, 6, yellow);
  matrix->drawPixel(6, 3, beige);
  matrix->drawPixel(6, 4, darkBeige);
  matrix->drawPixel(6, 6, lightOrange);
  matrix->drawPixel(7, 2, orange);
  matrix->drawFastVLine(7, 3, 2, darkBeige);
  matrix->drawFastVLine(7, 5, 2, orange);
}

void pokemon::drawCharmeleon()
{
  uint16_t maroon = matrix->Color(255, 82, 74),
  darkMaroon = matrix->Color(213, 41, 82),
  yellow = matrix->Color(255, 212, 8),
  beige = matrix->Color(255, 213, 123),
  darkBeige = matrix->Color(230, 172, 90),
  red = matrix->Color(255, 65, 0);

  matrix->drawPixel(3, 1, red);
  matrix->drawFastVLine(3, 3, 2, maroon);
  matrix->drawPixel(4, 1, yellow);
  matrix->drawPixel(4, 4, darkMaroon);
  matrix->drawPixel(4, 5, maroon);
  matrix->drawPixel(5, 1, maroon);
  matrix->drawPixel(5, 2, maroon);
  matrix->drawPixel(5, 3, beige);
  matrix->drawPixel(5, 4, maroon);
  matrix->drawPixel(6, 2, maroon);
  matrix->drawFastVLine(6, 3, 2, darkBeige);
  matrix->drawPixel(6, 5, maroon);
  matrix->drawPixel(7, 2, darkMaroon);
  matrix->drawPixel(7, 5, darkMaroon);
}

void pokemon::drawCharizard()
{
  uint16_t orange = matrix->Color(238, 131, 41),
  darkOrange = matrix->Color(205, 82, 65),
  yellow = matrix->Color(255, 212, 8),
  red = matrix->Color(229, 65, 16),
  beige = matrix->Color(255, 213, 123),
  darkBeige = matrix->Color(230, 172, 90),
  blue = matrix->Color(32, 115, 147),
  darkBlue = matrix->Color(7, 65, 82),
  brown = matrix->Color(131, 49, 24);

  matrix->drawPixel(0, 4, red);
  matrix->drawPixel(1, 4, yellow);
  matrix->drawPixel(1, 6, darkBlue);
  matrix->drawFastVLine(2, 1, 2, orange);
  matrix->drawPixel(2, 5, darkBlue);
  matrix->drawPixel(2, 6, blue);
  matrix->drawPixel(2, 7, darkBlue);
  matrix->drawPixel(3, 0, orange);
  matrix->drawPixel(3, 1, darkOrange);
  matrix->drawPixel(3, 2, darkBlue);
  matrix->drawPixel(3, 3, orange);
  matrix->drawPixel(3, 4, darkOrange);
  matrix->drawPixel(3, 5, darkBlue);
  matrix->drawPixel(3, 6, brown);
  matrix->drawPixel(4, 2, darkOrange);
  matrix->drawFastVLine(4, 3, 2, orange);
  matrix->drawPixel(4, 5, darkOrange);
  matrix->drawPixel(4, 7, darkOrange);
  matrix->drawPixel(5, 1, darkOrange);
  matrix->drawFastVLine(5, 3, 2, beige);
  matrix->drawPixel(5, 6, orange);
  matrix->drawPixel(5, 7, darkOrange);
  matrix->drawPixel(6, 2, orange);
  matrix->drawFastVLine(6, 3, 2, darkBeige);
  matrix->drawPixel(6, 5, orange);
  matrix->drawPixel(6, 6, darkOrange);
  matrix->drawPixel(7, 2, darkOrange);
  matrix->drawPixel(7, 5, darkOrange);
}

void pokemon::drawSquirtle()
{
  uint16_t lightTeal = matrix->Color(180, 246, 238),
  teal = matrix->Color(148, 213, 205),
  blue = matrix->Color(90, 172, 156),
  darkBlue = matrix->Color(65, 114, 98),
  beige = matrix->Color(255, 213, 106),
  darkBeige = matrix->Color(230, 172, 90),
  brown = matrix->Color(189, 106, 0);

  matrix->drawPixel(4, 2, lightTeal);
  matrix->drawPixel(4, 3, teal);
  matrix->drawPixel(5, 1, blue);
  matrix->drawFastVLine(5, 2, 2, teal);
  matrix->drawPixel(5, 4, blue);
  matrix->drawPixel(6, 2, beige);
  matrix->drawPixel(6, 3, darkBeige);
  matrix->drawPixel(6, 4, brown);
  matrix->drawPixel(6, 5, teal);
  matrix->drawPixel(6, 6, blue);
  matrix->drawPixel(7, 1, blue);
  matrix->drawFastVLine(7, 2, 2, darkBeige);
  matrix->drawFastVLine(7, 4, 2, blue);
  matrix->drawPixel(7, 6, darkBlue);
}

void pokemon::drawWartortle()
{
  uint16_t lightBlue = matrix->Color(148, 138, 238),
  blue = matrix->Color(98, 106, 197),
  white = matrix->Color(196, 213, 221),
  beige = matrix->Color(222, 197, 139),
  darkBeige = matrix->Color(189, 139, 58),
  brown = matrix->Color(148, 98, 98);

  matrix->drawPixel(3, 2, lightBlue);
  matrix->drawPixel(3, 3, blue);
  matrix->drawFastVLine(4, 2, 2, blue);
  matrix->drawPixel(5, 1, blue);
  matrix->drawFastVLine(5, 2, 2, beige);
  matrix->drawPixel(5, 4, blue);
  matrix->drawPixel(5, 5, white);
  matrix->drawPixel(6, 2, beige);
  matrix->drawPixel(6, 3, darkBeige);
  matrix->drawPixel(6, 5, lightBlue);
  matrix->drawPixel(6, 6, white);
  matrix->drawPixel(7, 1, blue);
  matrix->drawFastVLine(7, 2, 2, brown);
  matrix->drawPixel(7, 4, blue);
  matrix->drawPixel(7, 5, white);
  matrix->drawPixel(7, 6, lightBlue);
}

void pokemon::drawBlastoise()
{
  uint16_t lightBlue = matrix->Color(90, 139, 205),
  blue = matrix->Color(54, 111, 216),
  white = matrix->Color(205, 205, 213),
  beige = matrix->Color(213, 172, 74),
  darkBeige = matrix->Color(186, 121, 43),
  brown = matrix->Color(139, 98, 66),
  darkBrown = matrix->Color(114, 74, 50);

  matrix->drawPixel(1, 2, lightBlue);
  matrix->drawPixel(1, 3, blue);
  matrix->drawFastVLine(2, 2, 2, beige);
  matrix->drawPixel(2, 4, brown);
  matrix->drawPixel(2, 5, white);
  matrix->drawPixel(3, 1, lightBlue);
  matrix->drawFastVLine(3, 2, 3, darkBeige);
  matrix->drawPixel(3, 5, lightBlue);
  matrix->drawPixel(3, 6, brown);
  matrix->drawPixel(4, 0, lightBlue);
  matrix->drawFastVLine(4, 2, 2, beige);
  matrix->drawPixel(4, 4, lightBlue);
  matrix->drawPixel(4, 5, brown);
  matrix->drawPixel(4, 6, darkBrown);
  matrix->drawPixel(5, 2, beige);
  matrix->drawFastVLine(5, 3, 2, darkBeige);
  matrix->drawPixel(5, 5, brown);
  matrix->drawPixel(5, 6, darkBrown);
  matrix->drawPixel(6, 1, lightBlue);
  matrix->drawFastVLine(6, 2, 3, darkBeige);
  matrix->drawPixel(6, 5, lightBlue);
  matrix->drawPixel(6, 6, darkBrown);
  matrix->drawPixel(6, 7, blue);
  matrix->drawPixel(7, 1, blue);
  matrix->drawFastVLine(7, 3, 2, darkBrown);
  matrix->drawPixel(7, 5, blue);
}

void pokemon::drawPikachu()
{
  uint16_t black = matrix->Color(82, 82, 90),
  yellow = matrix->Color(246, 230, 83),
  darkYellow = matrix->Color(245, 189, 32),
  red = matrix->Color(255, 0, 0);

  matrix->drawPixel(2, 1, black);
  matrix->drawPixel(2, 7, black);
  matrix->drawPixel(3, 2, yellow);
  matrix->drawPixel(3, 6, yellow);
  matrix->drawPixel(4, 0, yellow);
  matrix->drawFastVLine(4, 3, 2, yellow);
  matrix->drawPixel(4, 5, darkYellow);
  matrix->drawPixel(5, 0, yellow);
  matrix->drawPixel(5, 1, darkYellow);
  matrix->drawPixel(5, 3, red);
  matrix->drawPixel(5, 4, darkYellow);
  matrix->drawPixel(5, 5, red);
  matrix->drawPixel(6, 1, darkYellow);
  matrix->drawPixel(6, 3, yellow);
  matrix->drawFastVLine(6, 4, 2, darkYellow);
  matrix->drawFastVLine(7, 2, 5, darkYellow);
}

void pokemon::drawRaichu()
{
  uint16_t black = matrix->Color(82, 82, 90),
  darkYellow = matrix->Color(245, 189, 32),
  orange = matrix->Color(246, 172, 42),
  darkOrange = matrix->Color(222, 123, 49),
  brown = matrix->Color(139, 98, 15),
  white = matrix->Color(255, 255, 255);

  matrix->drawPixel(2, 2, brown);
  matrix->drawPixel(2, 6, brown);
  matrix->drawPixel(3, 3, brown);
  matrix->drawPixel(3, 4, orange);
  matrix->drawPixel(3, 5, brown);
  matrix->drawPixel(4, 1, darkYellow);
  matrix->drawFastVLine(4, 3, 3, orange);
  matrix->drawPixel(4, 6, black);
  matrix->drawFastVLine(5, 1, 2, darkYellow);
  matrix->drawFastVLine(5, 3, 3, white);
  matrix->drawPixel(5, 7, black);
  matrix->drawPixel(6, 2, darkYellow);
  matrix->drawPixel(6, 3, orange);
  matrix->drawPixel(6, 4, white);
  matrix->drawPixel(6, 5, orange);
  matrix->drawPixel(6, 6, black);
  matrix->drawPixel(7, 3, darkOrange);
  matrix->drawPixel(7, 5, darkOrange);
}

void pokemon::drawJynx()
{
  uint16_t yellow = matrix->Color(222, 172, 49),
  purple = matrix->Color(148, 65, 189),
  white = matrix->Color(255, 255, 255),
  darkRed = matrix->Color(189, 49, 98),
  red = matrix->Color(246, 49, 90);

  matrix->drawFastVLine(1, 3, 3, yellow);
  matrix->drawPixel(2, 2, yellow);
  matrix->drawPixel(2, 3, white);
  matrix->drawPixel(2, 4, purple);
  matrix->drawPixel(2, 5, white);
  matrix->drawPixel(2, 6, yellow);
  matrix->drawPixel(3, 2, yellow);
  matrix->drawFastVLine(3, 3, 3, purple);
  matrix->drawPixel(3, 6, yellow);
  matrix->drawPixel(4, 1, white);
  matrix->drawPixel(4, 2, yellow);
  matrix->drawPixel(4, 3, red);
  matrix->drawPixel(4, 4, yellow);
  matrix->drawPixel(4, 5, red);
  matrix->drawPixel(4, 6, yellow);
  matrix->drawPixel(4, 7, white);
  matrix->drawPixel(5, 1, purple);
  matrix->drawPixel(5, 2, yellow);
  matrix->drawFastVLine(5, 3, 3, darkRed);
  matrix->drawPixel(5, 6, yellow);
  matrix->drawPixel(5, 7, purple);
  matrix->drawFastVLine(6, 2, 2, red);
  matrix->drawPixel(6, 4, darkRed);
  matrix->drawPixel(6, 5, red);
  matrix->drawPixel(6, 6, darkRed);
  matrix->drawFastVLine(7, 1, 2, red);
  matrix->drawFastVLine(7, 3, 2, darkRed);
  matrix->drawFastVLine(7, 5, 2, red);
  matrix->drawPixel(7, 7, darkRed);
}

void pokemon::drawElectabuzz()
{
  uint16_t black = matrix->Color(82, 82, 90),
  yellow = matrix->Color(246, 230, 83),
  darkYellow = matrix->Color(197, 164, 15),
  white = matrix->Color(255, 255, 255);

  matrix->drawPixel(0, 3, yellow);
  matrix->drawPixel(0, 5, darkYellow);
  matrix->drawPixel(1, 1, yellow);
  matrix->drawPixel(1, 4, yellow);
  matrix->drawPixel(1, 7, yellow);
  matrix->drawPixel(2, 1, yellow);
  matrix->drawPixel(2, 3, yellow);
  matrix->drawPixel(2, 4, black);
  matrix->drawPixel(2, 5, darkYellow);
  matrix->drawPixel(2, 7, yellow);
  matrix->drawFastVLine(3, 1, 2, darkYellow);
  matrix->drawPixel(3, 3, yellow);
  matrix->drawFastVLine(3, 4, 4, darkYellow);
  matrix->drawPixel(4, 3, black);
  matrix->drawPixel(4, 4, darkYellow);
  matrix->drawPixel(4, 5, black);
  matrix->drawPixel(5, 3, yellow);
  matrix->drawPixel(5, 4, black);
  matrix->drawPixel(5, 5, darkYellow);
  matrix->drawPixel(6, 2, darkYellow);
  matrix->drawPixel(6, 3, black);
  matrix->drawPixel(6, 4, darkYellow);
  matrix->drawPixel(6, 5, black);
  matrix->drawPixel(6, 6, darkYellow);
  matrix->drawPixel(7, 1, white);
  matrix->drawPixel(7, 2, darkYellow);
  matrix->drawPixel(7, 6, darkYellow);
  matrix->drawPixel(7, 7, white);
}

void pokemon::drawMagmar()
{
  uint16_t orange = matrix->Color(252, 73, 48),
  red = matrix->Color(204, 2, 65),
  yellow = matrix->Color(255, 238, 74),
  darkYellow = matrix->Color(230, 189, 49),
  brown = matrix->Color(98, 98, 98);

  matrix->drawPixel(0, 2, yellow);
  matrix->drawPixel(0, 4, yellow);
  matrix->drawFastVLine(1, 2, 3, red);
  matrix->drawPixel(2, 0, red);
  matrix->drawPixel(2, 2, red);
  matrix->drawPixel(2, 3, orange);
  matrix->drawPixel(2, 4, red);
  matrix->drawPixel(2, 6, red);
  matrix->drawPixel(3, 0, red);
  matrix->drawPixel(3, 3, brown);
  matrix->drawPixel(3, 6, red);
  matrix->drawPixel(4, 1, darkYellow);
  matrix->drawFastVLine(4, 2, 3, red);
  matrix->drawPixel(4, 5, darkYellow);
  matrix->drawPixel(5, 2, darkYellow);
  matrix->drawPixel(5, 3, red);
  matrix->drawPixel(5, 4, darkYellow);
  matrix->drawPixel(5, 7, yellow);
  matrix->drawFastVLine(6, 2, 3, darkYellow);
  matrix->drawPixel(6, 7, orange);
  matrix->drawFastVLine(7, 1, 2, red);
  matrix->drawFastVLine(7, 4, 2, red);
  matrix->drawPixel(7, 6, darkYellow);
}

void pokemon::drawMagikarp()
{
  uint16_t orange = matrix->Color(245, 97, 24),
  darkOrange = matrix->Color(189, 65, 65),
  yellow = matrix->Color(255, 222, 41),
  white = matrix->Color(255, 255, 255);

  matrix->drawPixel(2, 3, yellow);
  matrix->drawFastVLine(3, 2, 2, orange);
  matrix->drawPixel(3, 5, white);
  matrix->drawFastVLine(4, 2, 2, orange);
  matrix->drawPixel(4, 4, darkOrange);
  matrix->drawPixel(4, 5, white);
  matrix->drawPixel(5, 3, yellow);
}

void pokemon::drawGyrados()
{
  uint16_t white = matrix->Color(255, 255, 255),
  blue = matrix->Color(65, 180, 237),
  darkBlue = matrix->Color(23, 98, 148),
  teal = matrix->Color(123, 213, 238),
  beige = matrix->Color(205, 180, 123),
  red = matrix->Color(189, 49, 98);

  matrix->drawPixel(0, 1, white);
  matrix->drawFastVLine(1, 1, 2, white);
  matrix->drawPixel(1, 5, white);
  matrix->drawPixel(2, 0, darkBlue);
  matrix->drawPixel(2, 1, blue);
  matrix->drawPixel(2, 2, darkBlue);
  matrix->drawPixel(2, 3, white);
  matrix->drawFastVLine(2, 5, 2, white);
  matrix->drawPixel(3, 0, blue);
  matrix->drawPixel(3, 1, darkBlue);
  matrix->drawFastVLine(3, 2, 2, blue);
  matrix->drawFastVLine(3, 5, 2, blue);
  matrix->drawFastVLine(4, 0, 2, red);
  matrix->drawPixel(4, 2, white);
  matrix->drawPixel(4, 3, blue);
  matrix->drawPixel(4, 4, teal);
  matrix->drawPixel(4, 5, blue);
  matrix->drawPixel(4, 6, beige);
  matrix->drawPixel(4, 7, blue);
  matrix->drawPixel(5, 2, beige);
  matrix->drawFastVLine(5, 3, 2, blue);
  matrix->drawPixel(5, 5, beige);
  matrix->drawPixel(5, 7, blue);
  matrix->drawPixel(6, 3, beige);
  matrix->drawPixel(6, 4, blue);
  matrix->drawPixel(6, 6, darkBlue);
  matrix->drawPixel(6, 7, white);
  matrix->drawPixel(7, 7, darkBlue);
}

void pokemon::drawLapras()
{
  uint16_t blue = matrix->Color(65, 164, 230),
  beige = matrix->Color(222, 197, 131),
  brown = matrix->Color(213, 205, 197);

  matrix->drawFastVLine(2, 1, 2, blue);
  matrix->drawPixel(3, 1, beige);
  matrix->drawPixel(3, 2, blue);
  matrix->drawPixel(4, 2, blue);
  matrix->drawFastVLine(4, 4, 2, brown);
  matrix->drawPixel(5, 2, blue);
  matrix->drawFastVLine(5, 3, 4, brown);
  matrix->drawPixel(6, 2, beige);
  matrix->drawFastVLine(6, 3, 4, blue);
  matrix->drawPixel(7, 1, blue);
  matrix->drawFastVLine(7, 3, 3, beige);
  matrix->drawPixel(7, 7, blue);
}

void pokemon::drawVaporeon()
{
  uint16_t beige = matrix->Color(255, 230, 138),
  white = matrix->Color(255, 255, 255),
  blue = matrix->Color(90, 197, 230),
  darkBlue = matrix->Color(16, 115, 147),
  teal = matrix->Color(65, 156, 189);

  matrix->drawPixel(1, 5, teal);
  matrix->drawPixel(1, 7, teal);
  matrix->drawPixel(2, 1, beige);
  matrix->drawFastVLine(2, 2, 2, darkBlue);
  matrix->drawPixel(2, 6, teal);
  matrix->drawFastVLine(3, 1, 2, blue);
  matrix->drawPixel(3, 3, beige);
  matrix->drawPixel(3, 7, teal);
  matrix->drawFastVLine(4, 1, 2, blue);
  matrix->drawPixel(4, 3, white);
  matrix->drawPixel(4, 7, teal);
  matrix->drawFastVLine(5, 1, 2, white);
  matrix->drawFastVLine(5, 3, 2, blue);
  matrix->drawFastVLine(5, 5, 2, teal);
  matrix->drawFastVLine(6, 2, 2, blue);
  matrix->drawFastVLine(6, 4, 2, teal);
  matrix->drawPixel(7, 2, blue);
  matrix->drawPixel(7, 5, teal);
}

void pokemon::drawJolteon()
{
  uint16_t yellow = matrix->Color(246, 230, 83),
  darkYellow = matrix->Color(245, 189, 32),
  white = matrix->Color(255, 255, 255);

  matrix->drawPixel(1, 3, yellow);
  matrix->drawFastVLine(2, 1, 2, yellow);
  matrix->drawPixel(3, 1, yellow);
  matrix->drawPixel(3, 2, darkYellow);
  matrix->drawPixel(3, 3, white);
  matrix->drawPixel(3, 6, yellow);
  matrix->drawFastVLine(4, 1, 2, white);
  matrix->drawFastVLine(4, 3, 3, yellow);
  matrix->drawFastVLine(5, 2, 2, yellow);
  matrix->drawFastVLine(5, 4, 2, darkYellow);
  matrix->drawPixel(6, 2, yellow);
  matrix->drawPixel(6, 5, darkYellow);
}

void pokemon::drawFlareon()
{
  uint16_t red = matrix->Color(213, 65, 82),
  darkRed = matrix->Color(164, 65, 82),
  beige = matrix->Color(197, 164, 106);

  matrix->drawPixel(2, 1, beige);
  matrix->drawPixel(2, 3, red);
  matrix->drawFastVLine(3, 1, 2, red);
  matrix->drawPixel(3, 7, beige);
  matrix->drawPixel(4, 1, red);
  matrix->drawPixel(4, 2, darkRed);
  matrix->drawPixel(4, 3, beige);
  matrix->drawFastVLine(4, 5, 2, beige);
  matrix->drawFastVLine(5, 1, 2, beige);
  matrix->drawFastVLine(5, 3, 2, red);
  matrix->drawPixel(5, 5, darkRed);
  matrix->drawPixel(5, 6, beige);
  matrix->drawFastVLine(6, 2, 2, red);
  matrix->drawFastVLine(6, 4, 2, darkRed);
  matrix->drawPixel(7, 2, red);
  matrix->drawPixel(7, 5, darkRed); 
}

void pokemon::drawArticuno()
{
  uint16_t ice = matrix->Color(148, 197, 255),
  lightBlue = matrix->Color(123, 164, 255),
  blue = matrix->Color(80, 140, 230),
  darkBlue = matrix->Color(41, 115, 213),
  white = matrix->Color(205, 230, 255);

  matrix->drawPixel(0, 0, ice);
  matrix->drawPixel(0, 6, ice);
  matrix->drawPixel(1, 0, ice);
  matrix->drawPixel(1, 1, lightBlue);
  matrix->drawPixel(1, 3, darkBlue);
  matrix->drawPixel(1, 5, lightBlue);
  matrix->drawPixel(1, 6, ice);
  matrix->drawFastVLine(2, 0, 7, lightBlue);
  matrix->drawPixel(3, 1, lightBlue);
  matrix->drawPixel(3, 2, blue);
  matrix->drawPixel(3, 3, white);
  matrix->drawPixel(3, 4, blue);
  matrix->drawPixel(3, 5, lightBlue);
  matrix->drawPixel(4, 2, blue);
  matrix->drawPixel(4, 3, white);
  matrix->drawPixel(4, 4, blue);
  matrix->drawFastVLine(5, 3, 3, blue);
  matrix->drawPixel(5, 6, lightBlue);
  matrix->drawPixel(6, 1, blue);
  matrix->drawFastVLine(6, 2, 2, lightBlue);
  matrix->drawPixel(6, 7, blue);
  matrix->drawPixel(7, 0, lightBlue);
  matrix->drawPixel(7, 4, lightBlue);
  matrix->drawFastVLine(7, 5, 2, blue);
}

void pokemon::drawZapdos()
{
  uint16_t lightYellow = matrix->Color(255, 213, 65),
  yellow = matrix->Color(213, 172, 8),
  darkYellow = matrix->Color(156, 123, 16),
  brown = matrix->Color(197, 106, 25),
  darkGold = matrix->Color(122, 106, 24);

  matrix->drawPixel(0, 1, lightYellow);
  matrix->drawPixel(0, 7, lightYellow);
  matrix->drawPixel(1, 2, lightYellow);
  matrix->drawPixel(1, 4, brown);
  matrix->drawPixel(1, 6, lightYellow);
  matrix->drawFastVLine(2, 1, 2, yellow);
  matrix->drawPixel(2, 3, lightYellow);
  matrix->drawPixel(2, 4, yellow);
  matrix->drawPixel(2, 5, lightYellow);
  matrix->drawFastVLine(2, 6, 2, yellow);
  matrix->drawFastVLine(3, 2, 2, yellow);
  matrix->drawPixel(3, 4, darkYellow);
  matrix->drawFastVLine(3, 5, 2, yellow);
  matrix->drawFastVLine(4, 1, 3, yellow);
  matrix->drawPixel(4, 4, darkYellow);
  matrix->drawFastVLine(4, 5, 3, yellow);
  matrix->drawPixel(5, 3, darkGold);
  matrix->drawPixel(5, 4, darkYellow);
  matrix->drawPixel(5, 5, darkGold);
  matrix->drawPixel(6, 2, brown);
  matrix->drawPixel(6, 4, yellow);
  matrix->drawPixel(6, 6, brown);
  matrix->drawPixel(7, 3, yellow);
  matrix->drawPixel(7, 5, yellow);
}

void pokemon::drawMoltres()
{
  uint16_t yellow = matrix->Color(254, 197, 74),
  darkYellow = matrix->Color(222, 148, 16),
  orange = matrix->Color(217, 68, 3),
  red = matrix->Color(212, 8, 8),
  brown = matrix->Color(139, 98, 74);

  matrix->drawPixel(0, 1, yellow);
  matrix->drawPixel(0, 5, orange);
  matrix->drawPixel(0, 7, yellow);
  matrix->drawFastVLine(1, 1, 2, yellow);
  matrix->drawPixel(1, 4, red);
  matrix->drawFastVLine(1, 6, 2, yellow);
  matrix->drawPixel(2, 1, orange);
  matrix->drawPixel(2, 2, darkYellow);
  matrix->drawPixel(2, 3, yellow);
  matrix->drawPixel(2, 4, darkYellow);
  matrix->drawPixel(2, 5, yellow);
  matrix->drawPixel(2, 6, darkYellow);
  matrix->drawPixel(2, 7, orange);
  matrix->drawPixel(3, 2, orange);
  matrix->drawFastVLine(3, 3, 3, darkYellow);
  matrix->drawPixel(3, 6, orange);
  matrix->drawPixel(4, 3, brown);
  matrix->drawPixel(4, 4, darkYellow);
  matrix->drawPixel(4, 5, brown);
  matrix->drawFastVLine(5, 4, 2, red);
  matrix->drawPixel(5, 6, orange);
  matrix->drawPixel(6, 1, orange);
  matrix->drawPixel(6, 5, orange);
  matrix->drawPixel(6, 6, red);
  matrix->drawPixel(6, 7, orange);
  matrix->drawPixel(7, 2, red);
  matrix->drawFastVLine(7, 3, 2, orange);
  matrix->drawPixel(7, 5, red);
  matrix->drawPixel(7, 6, orange);
}

void pokemon::drawDratini()
{
  uint16_t lightBlue = matrix->Color(115, 131, 212),
  white = matrix->Color(255, 255, 255),
  blue = matrix->Color(90, 99, 189),
  darkBlue = matrix->Color(90, 99, 189);

  matrix->drawPixel(3, 4, white);
  matrix->drawPixel(3, 6, white);
  matrix->drawPixel(4, 5, blue);
  matrix->drawPixel(5, 5, blue);
  matrix->drawFastVLine(6, 2, 2, lightBlue);
  matrix->drawPixel(6, 4, blue);
  matrix->drawPixel(6, 5, white);
  matrix->drawPixel(7, 1, lightBlue);
  matrix->drawPixel(7, 3, lightBlue);
  matrix->drawFastVLine(7, 4, 2, white);
}

void pokemon::drawDragonair()
{
  uint16_t white = matrix->Color(255, 255, 255),
  lightBlue = matrix->Color(115, 164, 255),
  blue = matrix->Color(74, 106, 197),
  darkBlue = matrix->Color(0, 0, 255);

  matrix->drawPixel(1, 5, white);
  matrix->drawFastVLine(2, 3, 2, lightBlue);
  matrix->drawPixel(3, 4, lightBlue);
  matrix->drawPixel(4, 4, darkBlue);
  matrix->drawFastVLine(5, 2, 2, blue);
  matrix->drawPixel(5, 4, white);
  matrix->drawPixel(5, 5, blue);
  matrix->drawPixel(5, 7, darkBlue);
  matrix->drawFastVLine(6, 1, 3, lightBlue);
  matrix->drawPixel(6, 4, white);
  matrix->drawPixel(6, 5, lightBlue);
  matrix->drawPixel(6, 6, blue);
  matrix->drawFastVLine(7, 2, 2, white);
  matrix->drawPixel(7, 4, lightBlue);
}

void pokemon::drawDragonite()
{
  uint16_t yellow = matrix->Color(246, 230, 83),
  green = matrix->Color(23, 106, 98),
  orange = matrix->Color(238, 156, 57),
  darkOrange = matrix->Color(222, 115, 58),
  beige = matrix->Color(255, 238, 189);

  matrix->drawPixel(0, 0, yellow);
  matrix->drawPixel(0, 3, yellow);
  matrix->drawFastVLine(1, 1, 2, orange);
  matrix->drawFastVLine(1, 5, 2, green);
  matrix->drawPixel(2, 0, green);
  matrix->drawPixel(2, 1, orange);
  matrix->drawPixel(2, 2, darkOrange);
  matrix->drawFastVLine(2, 4, 2, green);
  matrix->drawPixel(3, 1, green);
  matrix->drawPixel(3, 2, beige);
  matrix->drawPixel(3, 3, orange);
  matrix->drawPixel(3, 4, green);
  matrix->drawPixel(3, 7, darkOrange);
  matrix->drawPixel(4, 2, beige);
  matrix->drawPixel(4, 3, orange);
  matrix->drawPixel(4, 4, darkOrange);
  matrix->drawPixel(4, 6, orange);
  matrix->drawPixel(5, 1, orange);
  matrix->drawFastVLine(5, 2, 2, beige);
  matrix->drawPixel(5, 4, orange);
  matrix->drawFastVLine(5, 5, 2, darkOrange);
  matrix->drawPixel(6, 2, orange);
  matrix->drawPixel(6, 3, beige);
  matrix->drawFastVLine(6, 4, 2, darkOrange);
  matrix->drawFastVLine(7, 1, 2, orange);
  matrix->drawFastVLine(7, 4, 2, orange);
}

void pokemon::drawMewtwo()
{
  uint16_t purple = matrix->Color(148, 65, 189),
  darkPurple = matrix->Color(135, 10, 215),
  lightPale = matrix->Color(222, 213, 229),
  pale = matrix->Color(180, 172, 197),
  darkPale = matrix->Color(131, 123, 156);

  matrix->drawPixel(0, 3, lightPale);
  matrix->drawPixel(0, 4, pale);
  matrix->drawPixel(0, 6, purple);
  matrix->drawPixel(0, 7, darkPurple);
  matrix->drawFastVLine(1, 3, 2, pale);
  matrix->drawPixel(1, 6, darkPurple);
  matrix->drawPixel(2, 2, pale);
  matrix->drawFastVLine(2, 3, 2, lightPale);
  matrix->drawPixel(2, 5, darkPale);
  matrix->drawPixel(2, 7, darkPurple);
  matrix->drawPixel(3, 1, pale);
  matrix->drawPixel(3, 3, lightPale);
  matrix->drawPixel(3, 4, pale);
  matrix->drawPixel(3, 6, darkPale);
  matrix->drawPixel(3, 7, darkPurple);
  matrix->drawPixel(4, 0, pale);
  matrix->drawPixel(4, 3, purple);
  matrix->drawPixel(4, 4, pale);
  matrix->drawPixel(4, 5, darkPurple);
  matrix->drawPixel(4, 7, pale);
  matrix->drawPixel(5, 2, pale);
  matrix->drawFastVLine(5, 3, 2, darkPurple);
  matrix->drawPixel(5, 5, darkPale);
  matrix->drawPixel(5, 6, darkPurple);
  matrix->drawPixel(6, 2, darkPale);
  matrix->drawPixel(6, 5, darkPale);
  matrix->drawPixel(7, 1, pale);
  matrix->drawPixel(7, 6, darkPale);
}

void pokemon::drawMew()
{
  uint16_t lightPink = matrix->Color(237, 130, 179),
  pink = matrix->Color(255, 5, 180),
  darkPink = matrix->Color(176, 96, 145);

  matrix->drawFastVLine(1, 4, 2, pink);
  matrix->drawPixel(2, 2, lightPink);
  matrix->drawPixel(2, 6, pink);
  matrix->drawPixel(3, 1, lightPink);
  matrix->drawPixel(3, 2, pink);
  matrix->drawPixel(3, 6, pink);
  matrix->drawFastVLine(4, 1, 3, pink);
  matrix->drawPixel(4, 6, darkPink);
  matrix->drawPixel(5, 3, lightPink);
  matrix->drawPixel(5, 4, pink);
  matrix->drawPixel(5, 5, darkPink);
  matrix->drawFastVLine(6, 3, 2, darkPink);
  matrix->drawPixel(7, 5, pink);
}
