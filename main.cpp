#include <stdio.h>
#include <tchar.h>
#include "SerialClass.h"	// Library described above
#include <string>

// application reads from the specified serial port and reports the collected data
int main()
{
	printf("Welcome to the serial test app!\n\n");

	Serial* SP = new Serial("\\\\.\\COM4");    // adjust as needed

	if (SP->IsConnected())
		printf("We're connected");

	while (SP->IsConnected())
	{
	
		// printf("Bytes read: (0 means no data available) %i\n",readResult);
		SP->WriteData("1",2);
		Sleep(500);
	}
	return 0;
}

