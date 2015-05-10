#include "gfcts.h"

void main ( void )
{
	P0M1 = 0x00;
	P1M1 = 0x00;
	P2M1 = 0x00;
	P3M1 = 0x00;
	
	while(~bt9);
	
	while(1)
  {
    while(~bt1)
		{
			send_test();
			Song_Name(1);
			runsong(1);
			
		} 
    while(~bt2)
		{
			Song_Name(0);
			runsong(0);
		}
    while(~bt3)
		{
      piano();
		}
		while(~bt4)
		{
      wind_up_song();
		}
  }	
}

void Delay1(signed int i)
{
  TH1=i >> 8;
  TL1=i;
  TR1=1;
	TF1=0;
  while(!TF1);
  TR1=0;
  TF1=0;
	
	return;
}	