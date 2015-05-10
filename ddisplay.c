#include "gfcts.h"

// Send Character to Terminal

void Song_Name (const int button)
{
	uart_init();
	
	if (button == 0)
	{
		uart_transmit(1);
		uart_transmit('M');
		uart_transmit('A');
		uart_transmit('R');
		uart_transmit('Y');
		uart_transmit(' ');
		uart_transmit('H');
		uart_transmit('A');
		uart_transmit('D');
		uart_transmit(' ');
		uart_transmit('A');
		uart_transmit(' ');
		uart_transmit('L');
		uart_transmit('I');
		uart_transmit('T');
		uart_transmit('T');
		uart_transmit('L');
		uart_transmit('E');
		uart_transmit(' ');
		uart_transmit('L');
		uart_transmit('A');
		uart_transmit('M');
		uart_transmit('B');
		uart_transmit(10);
		uart_transmit(13);
		uart_transmit(2);
		
	}

	if (button == 1)
	{
		uart_transmit(1);
		uart_transmit('W');
		uart_transmit('H');
		uart_transmit('E');
		uart_transmit('N');
		uart_transmit(' ');
		uart_transmit('T');
		uart_transmit('H');
		uart_transmit('E');
		uart_transmit(' ');
		uart_transmit('S');
		uart_transmit('A');
		uart_transmit('I');
		uart_transmit('N');
		uart_transmit('T');
		uart_transmit('S');
		uart_transmit(10);
		uart_transmit(13);
		uart_transmit(2);
	}

	return;
}