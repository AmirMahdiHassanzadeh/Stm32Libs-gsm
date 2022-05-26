#ifndef _SENSOR_H
#define _SENSOR_H
#include "alllib.h"

#define DS18B20_PORT DS18B20_GPIO_Port
#define DS18B20_PIN DS18B20_Pin

#define DHT22_PORT DHT22_GPIO_Port
#define DHT22_PIN DHT22_Pin
float SENSOR_Temp_S18B20(void);

#endif
