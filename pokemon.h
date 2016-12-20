#ifndef pokemon_h
#define pokemon_h

#include <Adafruit_NeoPixel.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Arduino.h>

// Available ornaments
enum ORNAMENTS
{
    BULBASAUR = 1,
    IVYSAUR,
    VENUSAUR,
    CHARMANDER,
    CHARMELEON,
    CHARIZARD,
    SQUIRTLE,
    WARTORTLE,
    BLASTOISE,
    PIKACHU,
    RAICHU,
    JYNX,
    ELECTABUZZ,
    MAGMAR,
    MAGIKARP,
    GYRADOS,
    LAPRAS,
    VAPOREON,
    JOLTEON,
    FLAREON,
    ARTICUNO,
    ZAPDOS,
    MOLTRES,
    DRATINI,
    DRAGONAIR,
    DRAGONITE,
    MEWTWO,
    MEW
};

// Class for the creation of ornaments
class pokemon
{
public:
    pokemon(uint8_t pin);
    void begin(uint8_t brightness = 20);
    void setBrightness(uint8_t brightness);
    void setOrnaments(uint8_t ornaments);
    void refresh();
    void refresh(uint8_t ornaments);

private:
    Adafruit_NeoMatrix *matrix;
    uint8_t _ornaments;  // Individual set bits get specific ornaments drawn
    void drawBulbasaur();
    void drawIvysaur();
    void drawVenusaur();
    void drawCharmander();
    void drawCharmeleon();
    void drawCharizard();
    void drawSquirtle();
    void drawWartortle();
    void drawBlastoise();
    void drawPikachu();
    void drawRaichu();
    void drawJynx();
    void drawElectabuzz();
    void drawMagmar();
    void drawMagikarp();
    void drawGyrados();
    void drawLapras();
    void drawVaporeon();
    void drawJolteon();
    void drawFlareon();
    void drawArticuno();
    void drawZapdos();
    void drawMoltres();
    void drawDratini();
    void drawDragonair();
    void drawDragonite();
    void drawMewtwo();
    void drawMew();
};

#endif
