//  FARM DATA RELAY SYSTEM
//
//  GATEWAY 2.000
//
//  Developed by Timm Bogner (timmbogner@gmail.com) in Urbana, Illinois, USA.
//
// #define USE_OLED
#include <Arduino.h>
#include "fdrs_gateway_config.h"
#include <fdrs_gateway.h>

void setup() { 
Serial.begin(115200);
delay(1000);
Serial.println("=====================================");
Serial.println("===== GNSS - RPM - G A T E W A Y ====");
Serial.println("=====================================");
beginFDRS();
}

void loop() {
loopFDRS();
}
