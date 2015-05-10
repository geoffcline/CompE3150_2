#include "gfcts.h"

void step()
{

  const int start = 7045;
	int adj = 0;
	
	TMOD=0x11;
	IEN0 = 0x00;
	
  while(bt9)
  {
		spkr = ~spkr;
		if(~bt2)
			adj++;
		if(~bt3)
			adj--;
		delay1(adj - start);
		
		if (adj / start != 0 )
			adj = 0;
			
	}
	return; 
}

