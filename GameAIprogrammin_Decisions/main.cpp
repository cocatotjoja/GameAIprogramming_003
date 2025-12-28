#include <iostream>
#include <Windows.h>
#include "enums.h"


using namespace std;
int hourLength = 60000000;
int minute = 0;
int hour = 0;

bool shouldExit = false;

void UpdateTime()
{
	// Update & loop minute counter
	if (minute < hourLength)
	{
		minute++;
	}
	else
	{
		hour++;
		minute = 0;
		cout << hour << endl;
	}
	// Loop hour counter
	if (hour > 24)
	{
		hour = 0;
	}
}

int main()
{

	while (!shouldExit)
	{
		// Check if user press escape to exit program
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			shouldExit = true;
		}

		// Run Game Loop

		UpdateTime();

		
	}
}