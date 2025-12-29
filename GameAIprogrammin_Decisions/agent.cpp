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

void Agent::UpdateAgent(AgentState newState)
{
	if (timer > 0)
	{
		return;
	}
	switch (currentState)
	{
		case SLEEPING:
			// Set timer & sleep level on entry
			if (currentState != newState)
			{
				timer = 8;
				break;
			}
			// Decrease timer & hunger
			if (timer > 0)
			{
				timer -= 1;
				hunger -= 1;
				break;
			}
			currentState = newState;
			sleep = sleepMAX;
			break;
		case EATINGDINER:
			hunger = hungerMAX;
			money -= 1;
			sleep -= 1;
			break;
		case EATINGHOME:
			hunger = hungerMAX;
			food -= 1;
			sleep -= 1;
			break;
		case WORKLONG:
			// Set timer & money level on entry
			if (currentState != newState)
			{
				timer = 8;
				money += 5;
				break;
			}

			// Decrease timer & hunger
			timer -= 1;
			hunger -= 1;
			break;
		case WORKSHORT:
			// Set timer & money level on entry

			// Decrease timer & hunger
			timer -= 1;
			hunger -= 1;
			break;
		case SHOPPING:
			food += 3;
			sleep -= 1;
			hunger -= 1;
			break;
		case ATPUB:
			sleep -= 1;
			hunger -= 1;
			money -= 1;
			break;
		default:
			break;
	}
}
