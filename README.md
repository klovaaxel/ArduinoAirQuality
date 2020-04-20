# ArduinoAirQuality
A project started to easily display air quality readings on a screen connected to an Arduino

## Current state of the project
Currently, the project is in a state of development where the screen displays temporary values that later will be replaced with sensor readings when a sensor is plugged in. The Arduino also displays a countdown timer to allow the air quality sensor to warm up and start gathering accurate readings.

(Working on ArduinoIDE 1.6.8)

![Image of screeen displaying temp values](https://lh3.googleusercontent.com/Exx7rYdSaBYGNmUvF95eH3giWyO-Zqywgpm_KDBP8xAr5uGICQlwcqzPpgyUR-04-5Le7Jec1IxauQcKGeDu55ykZRljgvhFs1iz1EZeFMT1_zEL_hQMxaaA8-PryEBWiyvRvrTj2qFkbbCwR_A1b3yk63qdTvDXQhwvyJ5EbenG0E5r14QLI-A9CIhSNXYc4AzqI6sWusDo_tsm8WVBsxtSqvkmfarduXZd2e0s8fpXdwqie6yFmm7KTF-Ii0_tdI2NMZCddbu4SfOBlqX4YMo1klvaPh-52cyp6n2Jil1gQIjPs81QtEyr85MBBLnx4H57igSqlRFmFVGbm_O5vyw-46nmvh3gLxNeLXbHC0bnkh5khMV2chH9DCc7UpPKLRG0NUAOEjhJQp--Py4SNDIt7mnyu46IRR2VlLONPZZKMjql0iBAZmOpc7zyS0R3aLRqxcs00_3ZHRAbEfKZwt6yNePsbQdjdqaG-A1m49QlO95I9xl5C6I_UHCNBLtF7Ql7-sCl-HxiURDXUEarQ7xFeohYyl8_Psbu2gAHBiBM5DQwDpQqfGrHldzG9cSakS7_TeS5mvRTvsRD-z7-aA1byj7g3BBcrGS7ZoWCCM350Vbn20qJBSyUTrwR4pOQCI1xPItnH_Ioefhg1i2fQvsw-84yx6uGS6qbkZ9QN5auoL6kZtZqAt7ZYYm3Ci-N0qg=w1920-h944-ft)

## Hardware

* ### Screen and libraries
  ![Image of screen](https://contestimg.wish.com/api/webimage/58768fc06dd28e28363b5ac5-0-large?cache_buster=11580d4532c78193565015796df82d6e)

  * [Wish.com listing](https://www.wish.com/product/58768fc06dd28e28363b5ac5?&share=web)

  #### Libraries used for screen
  * [MCUFRIEND_kvb](https://github.com/prenticedavid/MCUFRIEND_kbv)
  * [Adafruit-GFX-Library](https://github.com/adafruit/Adafruit-GFX-Library)

  To get the MCUFRIEND_kvb library support this model of screen uncomment the '#define SUPPORT_8230' line in MCUFRIEND_kbv.cpp document




* ### Air Quality Sensor and libraries
  ![Image of Sensor](https://cdn.sparkfun.com/r/500-500/assets/parts/1/2/1/3/2/14193-01.jpg)

  * [Electrokit.com listing](https://www.electrokit.com/produkt/luftkvalitetssensor-ccs811-monterad-pa-kort/)
  * [Documentation on connecting and programming](https://learn.sparkfun.com/tutorials/ccs811-air-quality-breakout-hookup-guide#arduino-library-and-usage)
  * [Sparkfun library](https://github.com/sparkfun/SparkFun_CCS811_Arduino_Library/)
  
* ### Case
  ![Case for arduino](https://cdn.thingiverse.com/assets/95/5f/7b/c4/30/ArduinoCase.PNG)
  * [Basic case on thingiverse.com](https://www.thingiverse.com/thing:4293338)

