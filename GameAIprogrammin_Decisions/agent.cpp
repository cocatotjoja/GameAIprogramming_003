#include "agent.h"

Agent::Agent(int moneyV, int sleepV, int hungerV, int foodV)
{
	moneyMAX = moneyV;
	sleepMAX = sleepV;
	hungerMAX = hungerV;
	foodMAX = foodV;
	money = moneyV;
	sleep = sleepV;
	hunger = hungerV;
	food = foodV;
}

void Agent::UpdateAgent()
{
	switch (currentState)
	{
		case SLEEPING:
			break;
		case EATINGDINER:
			hunger = hungerMAX;
			money -= 1;
			break;
		case EATINGHOME:
			hunger = hungerMAX;
			break;
		case WORKLONG:
			break;
		case WORKSHORT:
			break;
		case SHOPPING:
			food += 3;
			break;
		case ATPUB:
			break;
		default:
			break;
	}
}
