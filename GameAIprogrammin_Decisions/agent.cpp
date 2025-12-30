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
			if (setTimer)
			{
				timer = 8;
				setTimer = false;
				break;
			}
			// Decrease timer & hunger
			if (timer > 0)
			{
				timer -= 1;
				hunger -= 1;
				break;
			}
			// Update sleep and hunger on exit
			sleep = sleepMAX;
			hunger -= 1;
			setTimer = true;
			// Enter new state for next loop
			currentState = newState;
			break;

		case EATINGDINER:
			hunger = hungerMAX;
			money -= 1;
			sleep -= 1;
			// Enter new state for next loop
			currentState = newState;
			break;

		case EATINGHOME:
			hunger = hungerMAX;
			food -= 1;
			sleep -= 1;
			// Enter new state for next loop
			currentState = newState;
			break;

		case WORKLONG:
			// Set timer on entry
			if (setTimer)
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
			// Update Money & Hunger on exit loop
			money += 8;
			hunger -= 1;
			setTimer = true;
			// Enter new state for next loop
			currentState = newState;
			break;

		case WORKSHORT:
			// Set timer & money level on entry
			if (setTimer)
			{
				timer = 2;
				break;
			}
			// Decrease timer & hunger
			if (timer > 0)
			{
				timer -= 1;
				hunger -= 1;
				break;
			}
			// Update Money & Hunger on exit loop
			money += 3;
			hunger -= 1;
			setTimer = true;
			// Enter new state for next loop
			currentState = newState;
			break;

		case SHOPPING:
			food += 3;
			sleep -= 1;
			hunger -= 1;
			// Enter new state for next loop
			currentState = newState;
			break;

		case ATPUB:
			sleep -= 1;
			hunger -= 1;
			money -= 1;
			// Enter new state for next loop
			currentState = newState;
			break;
		default:
			break;
	}
}
