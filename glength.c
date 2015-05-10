#include "gfcts.h"

void matchlength()
{
  const int tone = -7045;
	long int rec = 0;
	
	while(bt1);
	while(~bt1)
		rec++;

	rec = rec / 33;
	
  while(rec)
  {
		delay1(tone);
		spkr = ~spkr;
		rec--;
	}
	return; 
}