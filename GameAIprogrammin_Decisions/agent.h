#pragma once
#include "enums.h"

class Agent
{
public:
	int moneyMAX;
	int sleepMAX;
	int hungerMAX;
	int foodMAX;
	int money;
	int sleep;
	int hunger;
	int food;

	int timer = 0;

	AgentState currentState = SLEEPING;

	Agent(int moneyV, int sleepV, int hungerV, int foodV);
	void UpdateAgent(AgentState newState);
};