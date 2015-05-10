#include "gfcts.h"

void piano()
{
	TMOD=0x11;
  while(bt9)
  {
    while(~bt1)
		{
			spkr = ~spkr;
			delay1(-7045);
		}
		
		while(~bt2)
		{
			spkr = ~spkr;
			delay1(-6267);
		} 
	
		while(~bt3)
		{
			spkr = ~spkr;
			delay1(-5591);
		}
  }
}

void wind_up_song()
{
  const int start = -7045;
	int adj = 0;
  while(bt9)
  {
    if(~bt1)
    {
      if(adj + start < 0)
      {
        spkr = ~spkr;
        delay1(start + adj);
        adj++;
      }
			else
			{
				adj = 0;
			}	
    }
	}
	return; 
}
