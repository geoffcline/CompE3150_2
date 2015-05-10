#include "gfcts.h"

// Send Character to Terminal

void Song_Name (int button)
{
	Set_Timer();

	if (button == 0)
	{
		send_char('M');
		send_char('A');
		send_char('R');
		send_char('Y');
		send_char(' ');
		send_char('H');
		send_char('A');
		send_char('D');
		send_char(' ');
		send_char('A');
		send_char(' ');
		send_char('L');
		send_char('I');
		send_char('T');
		send_char('T');
		send_char('L');
		send_char('E');
		send_char(' ');
		send_char('L');
		send_char('A');
		send_char('M');
		send_char('B');
	}

	if (button == 1)
	{
		send_char('W');
		send_char('H');
		send_char('E');
		send_char('N');
		send_char(' ');
		send_char('T');
		send_char('H');
		send_char('E');
		send_char(' ');
		send_char('S');
		send_char('A');
		send_char('I');
		send_char('N');
		send_char('T');
		send_char('S');
	}

	return;
}

void send_test()
{	
	int roll = 0;
	
	Set_Timer();
	
	led1 = ~led1;
	
	while(roll < 250)
	{
		send_char(roll);
		roll = roll + 1;
	}
	
	led1 = ~led1;
}



void Set_Timer()
{
	SCON = 0x40;
	TMOD = 0x20; 
	TH1  = 0xFE;
	TL1  = TH1;
	TR1  = 1;
	TI   = 0;

	return;
}


void send_char(const char Letter)
{
	SBUF = Letter;
	while(~TI);
	TI=0;

	return;
}