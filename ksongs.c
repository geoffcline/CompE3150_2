#include "gfcts.h"

#define FREQ	7373000
#define QUARTER (FREQ/3276800) // quarter note
#define SPEAKER 

// Tone-- ID #
#define C4 	((FREQ/4)/261.6) 	//C--1
#define	D4	((FREQ/4)/293.7)	//D--2
#define E4	((FREQ/4)/329.6)	//E--3
#define F4	((FREQ/4)/349.2)	//F--4
#define G4	((FREQ/4)/391.9)	//G--5

// GLOBAL VARIABLES
const int MAX_DELAY = 700;
char d;
int play_period;

code int tone_period[] = {0,C4,D4,E4,F4,G4};

// Note arrays, with note ID #'s
code int  marysz = 
code char mary[]={
						 //Mary had a little lamb
						 3,2,1,2,3,3,3,0,0,
						 2,2,2,0,0,3,5,5,0,0,
						 3,2,1,2,3,3,3,0,0,
						 3,2,2,3,2,1,0,0};

code char saints[]={
						 //When the saints
						 1,3,4,5,0,0,
						 1,3,4,5,0,0,
						 1,3,4,5,3,1,3,2,0,0};


//Duration arrays, where 1=quarter note, 4= whole note, etc.
code char duration[26][20]={
							//Mary had a little lamb
							1,1,1,1,1,1,2,0,0,
							1,1,2,1,1,2,0,0,
							1,1,2,1,1,2,0,0,
							1,1,1,1,1,1,1,0,0,
							1,1,1,1,1,4,0,0,
							//When the saints
							1,1,1,4,0,0,
							1,1,1,4,0,0,
							1,1,1,2,2,2,2,4,0,0};


//Uses row locations from note and duration arrays to play songs
// Mary called by song(0,4) and Saints called by song(5,7)
void song (char f, char l)
{
	char n;
	unsigned int i,j;
	
	i=0;
	j=f;
	do{
		do
		{
			notes(n,d);
			//NoteName(n);
			i++;
			n=note [j][i];//info from arrays
			d=duration [j][i];
		} while (d!=0);
		i=0;
		j++;
	} while (j<l);
	
}

// Notes sets duration of notes
void notes(char n, char l)
{
	int note_length;
	int time;
	if (l==0) //note has no time length
	{ 
		note_length=MAX_DELAY;
		time=0;
	}
	else
	{
		note_length=QUARTER*d;
		time=15; //delay between notes, when not full rest 
	}
	play_period=&tone_period[n];
	
	if(*play_period!=0){
		TH1=-(*play_period)>>1;
		TL1=-(*play_period)&0x0FF;
		TR1=1;
		ET1=1;
	}
	
	Delay(-2000);
	
	ET1=0;
	TR1=0;
	
	if (time!=0) Delay (time);
	
	//may need timer code here
	
}

void timer1() interrupt 3
{
	spkr = ~spkr;
	return;
}