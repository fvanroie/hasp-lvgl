/* MIT License - Copyright (c) 2020 Francis Van Roie
   For full license information read the LICENSE file in the project folder */

#ifndef HASP_MDNS_H
#define HASP_MDNS_H

#include "ArduinoJson.h"

void mdnsSetup();
void mdnsLoop(void);
void mdnsStart(void);
void mdnsStop(void);

bool mdnsGetConfig(const JsonObject & settings);
bool mdnsSetConfig(const JsonObject & settings);

#endif