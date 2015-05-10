#include "gfcts.h"

void matchlength()
{
  const int tone = -7045;
	long int rec = 0;
	
	TMOD=0x11;
	IEN0 = 0x00;
	
	while(bt1);
	while(~bt1)
		rec++;

	rec = rec / 300;
	
  while(rec)
  {
		delay1(tone);
		spkr = ~spkr;
		rec--;
	}
	return; 
}