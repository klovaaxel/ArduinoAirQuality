// Included libraries for screen
#include <Adafruit_GFX.h>    // Core graphics library
#include <MCUFRIEND_kbv.h>   // Hardware-specific library
MCUFRIEND_kbv tft;           // Declares MCUFRIEND_kbv as tft

// Defines simple colours for screen
#define BLACK   0x0000
#define RED     0xF800
#define GREEN   0x07E0
#define WHITE   0xFFFF
#define GREY    0x8410
#define BLUE    0x008F

// Included libraries for air quality sensor
#include <SparkFunCCS811.h>

#define CCS811_ADDR 0x5B     // Default I2C Address
//#define CCS811_ADDR 0x5A   // Alternate I2C Address

CCS811 myCCS811(CCS811_ADDR);  


void setup() {
  Serial.begin(9600);

  
  // Air quality sensor
  myCCS811.begin();

  // Screen
  uint16_t ID = tft.readID();
  if (ID == 0xD3) ID = 0x9481;
  tft.begin(ID);
  tft.setRotation(0);

}

void loop() {
  // Screen
  tft.fillScreen(BLACK);

  
  // Air quality sensor
  if (myCCS811.dataAvailable())
  {
    myCCS811.readAlgorithmResults();
    int tempCO2 = myCCS811.getCO2();
    int tempVOC = myCCS811.CCS811::getTVOC();
  }
  else if (myCCS811.checkForStatusError())
  {
    while(1);
  }

  delay(1000); //Wait for next reading
  
}
