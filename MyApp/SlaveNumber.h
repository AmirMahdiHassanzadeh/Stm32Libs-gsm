#ifndef _SLAVE_H_
#define _SLAVE_H_

#include "ALLLib.h"



char SLV_extractSetNumberInSms(char stateFlag[10]);
char SLV_extractAccessSetNumber(void);
char SLV_exteractDelNumberInSms(char flagDel[10]);
char SLV_setDelOprationFunction(void);
void SLV_slaveOprationFunction(void);

#endif
