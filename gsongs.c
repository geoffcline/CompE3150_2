#include "gfcts.h"

//0, C4, D4, E4, F4, G4
code const int tone_values[6] = {0,-7045,-6276,-5591,-5278,-4702};

//Note arrays, with note IDs
	//Mary Had a Little Lamb
code const int  marysz = 36;
code const int  maryn[]=
	       {3,2,1,2,3,3,3,0,0,
			2,2,2,0,0,3,5,5,0,
	        0,3,2,1,2,3,3,3,0,
	        0,3,2,2,3,2,1,0,0 };
code const int  maryd[]=
	       {1,1,1,1,1,1,2,0,0,
			1,1,2,1,1,2,0,0,1,
	        1,2,1,1,2,0,0,1,1,
	        1,1,1,1,1,0,0,1,1 };

	//When the Saints
code const int  saintsz= 22;
code const int  saintsn[22]=
	       {1,3,4,5,0,0,
			1,3,4,5,0,0,
			1,3,4,5,3,1,
            3,2,0,0     };
code const int  saintsd[22]=
	       {1,1,1,4,0,0,
			1,1,1,4,0,0,
			1,1,1,2,2,2,
            2,4,0,0     };
						
int lflag = 0;
						 
unsigned int intcnt = 0;



void runsong(const int i)
{
	if (i == 1)
		song(saintsn, saintsd, saintsz);
	else
		song(maryn, maryd, marysz);
	
	return;
}

void song (const int SNF[],const int SNL[],const int SSZ)
{
	int i = 0;
	int nf, nl;
	
	while(i < SSZ && bt9)
	{
		nf = SNF[i];
		nl = SNL[i];
		playnote(nf,nl);
		i = i + 1;
	}
	
	return;
}


//actual timings
void playnote(const int nf, const int nl)
{
	int notefreq = tone_values[nf];
	signed int noteleng = -56;
	
	TMOD=0x11;
	IEN0 = 0x81;
	
	TH0 = -2000 >> 8;
	TL0 = -2000;
	TR0 = 1;
		
  if ( notefreq == 0)
	{
		while(!lflag);
	}
	else
	{	
		while(!lflag)
		{
			delay1(notefreq);
			spkr = ~spkr;
		}
	}
	
	TR0 = 0;
	TF0 = 0;
	lflag = 0;
	
	return;
}


void timer0 (void) interrupt 1
{
	if (++intcnt == 20000)
	{
		TR0 = 0;
		lflag = 1;
		intcnt = 0;
		TH0 = -2000 >> 8;
	  TL0 = -2000;
		TR0 = 1;
	}
}
	