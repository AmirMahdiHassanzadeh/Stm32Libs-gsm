#ifndef DHT_H_
#define DHT_H_

#include "main.h"


typedef struct dht {
	float hum;
	float temp;
} DHT_data;

typedef enum {
	DHT11,
	DHT22
} DHT_type;




#define DHT_Port 	DHT22_GPIO_Port				
#define DHT_Pin 	DHT22_Pin 	
#define DHT_PullUp 0					
#define DHT_timeout 10000			


DHT_data DHT_getData(DHT_type t); 
void DHT22_value(float* Temp,float* Hum);
#endif
