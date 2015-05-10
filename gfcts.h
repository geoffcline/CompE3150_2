#ifndef  GFCTS_H
#define  GFCTS_H

#include <reg932.h>
#include "uart.h"

void delay1(signed int i);

void runsong(const int i);

void song (const int SNF[],const int SNL[],const int SSZ);

void playnote(const int nf, const int nl);

void NoteName(char Name);

void piano();

void wind_up_song();

void Song_Name (int button);

sbit spkr = P1^7;

sbit bt1 = P2^1;
sbit bt2 = P0^3;
sbit bt3 = P2^2;
sbit bt4 = P0^2;
sbit bt5 = P1^4;
sbit bt6 = P0^0;
sbit bt7 = P2^0;
sbit bt8 = P0^1;
sbit bt9 = P2^3;

sbit outenable = P2^0;
sbit ap =  P1^4;
sbit bp =  P1^3;
sbit cp =  P1^2;
sbit dp =  P1^1;
sbit ep =  P1^0;
sbit fp =  P1^5;
sbit gp =  P1^6;

sbit led1 =  P2^5;
sbit led2 =  P0^7;
sbit led3 =  P2^6;
sbit led4 =  P0^6;
sbit led5 =  P1^6;
sbit led6 =  P0^4;
sbit led7 =  P2^4;
sbit led8 =  P0^5;
sbit led9 =  P2^7;


#endif 