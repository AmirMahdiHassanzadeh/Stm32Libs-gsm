#ifndef  _MYAPP_H
#define  _MYAPP_H
#include "alllib.h"

void SetUpBeforeInit(void);
void SetUpAffterInit(void);

void timerCalleBake1(void);
void timerCalleBake2(void);
void timerCalleBake3(void);
void netLight_callBack_interrupt(void);



void Loop(void);

#endif
