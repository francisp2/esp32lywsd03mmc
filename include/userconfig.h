//#include <myprivatedate.h> // might be deleted once your data is provided

// next data must be subsituted by yours
const char *ssid = "SNOW";
const char *password = "0495370003";
const char *mqtt_server = "10.0.0.63";
const char *mqtt_user = "root";
const char *mqtt_pw = "root";

IPAddress staticIP(10,0,0,188);
IPAddress gateway(10,0,0,1);
IPAddress subnet(255,255,255,0);
IPAddress dns(1,1,1,1);


uint8_t updatetime = 30;   // secs
uint8_t wifi_watchdog = 255; // secs

// planned for future use of other sensors
const String modelName[] = {"LYWSD03MMC", "CGD1"};

const Model model[] = {LYWSD03MMC, LYWSD03MMC, LYWSD03MMC};
// add your MAC addresses 
const std::string MAC[] = {"A4:C1:38:C9:BC:21", "A4:C1:38:50:68:61", "A4:C1:38:C3:8E:E5"};
// give them a name
const String name[] = {"Eetkamer", "Keuken", "Toilet"};
// give them a number/id in case you need additional coding, I myself wrote this numbers to the back of the sensor
const String number[] = {"1", "2", "3"};
