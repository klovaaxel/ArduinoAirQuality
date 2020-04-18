// Included libraries for screen
#include <Adafruit_GFX.h>    // Core graphics library
#include <MCUFRIEND_kbv.h>   // Hardware-specific library
MCUFRIEND_kbv tft;           // Declares MCUFRIEND_kbv as tft

#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeSans12pt7b.h>
#include <Fonts/FreeSerif12pt7b.h>

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

  Serial.print("serial started");

  // Air quality sensor
  //myCCS811.begin();

  // Screen
  uint16_t ID = tft.readID();
  if (ID == 0xD3) ID = 0x9481;
  tft.begin(ID);
  tft.setRotation(2);
  tft.fillScreen(BLACK);

  Serial.print("setup complete");

  for (int i = 20; i > 0; i--) { // Timer for the warmup time of sensor
    Serial.print(i); // Debug

    char str[8];
    itoa( i, str, 10 ); // Converts int to char to display on screen

    tft.fillScreen(BLACK);
    showmsgXY(95, 200, 5, &FreeSans12pt7b, str); // Prints remaining minutes on screen


    //delay(59000); // Time to wait between minutes
    delay(5000);  // Debug time
  }
  tft.fillScreen(BLACK);

}

void loop() {
  // Screen
  showmsgXY(20, 100, 2, &FreeSans12pt7b, "tempCO2");
  showmsgXY(20, 200, 2, &FreeSans12pt7b, "tempVOC");

  Serial.print("text printed");

  // Air quality sensor
//  if (myCCS811.dataAvailable())
//  {
//    myCCS811.readAlgorithmResults();
//    int tempCO2 = myCCS811.getCO2();
//    int tempVOC = myCCS811.CCS811::getTVOC();
//  }
//  else if (myCCS811.checkForStatusError())
//  {
//    while(1);
//  }
//
//  delay(1000); //Wait for next reading
//
}

void showmsgXY(int x, int y, int sz, const GFXfont *f, const char *msg)
{
    int16_t x1, y1;
    uint16_t wid, ht;
    tft.setFont(f);
    tft.setCursor(x, y);
    tft.setTextColor(WHITE);
    tft.setTextSize(sz);
    tft.print(msg);
    delay(1000);
}
