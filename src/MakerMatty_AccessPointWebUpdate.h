/** 
 * Author	: @makermatty (maker.matejsuchanek.cz)
 * Date		: 15-6-2020
 */

#ifdef ESP32

#ifndef _MM_ACCESS_POINT_WEB_UPDATE_h
#define _MM_ACCESS_POINT_WEB_UPDATE_h

#include <Arduino.h>

// #include <DNSServer.h>
#include <ESPmDNS.h>
#include <Update.h>
#include <WebServer.h>
#include <WiFi.h>
#include <WiFiClient.h>

#include "jquery.h"

namespace AccessPointWebUpdate {

void start(const char* ssid = "ESP32_UPDATE", const char* password = nullptr, const char* host = "update");

};

#endif
#endif
