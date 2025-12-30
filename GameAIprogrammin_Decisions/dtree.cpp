#include "dtree.h"

AgentState Dtree::ChangeState(int time, Agent agent)
{
	switch (agent.currentState)
	{
	case SLEEPING:
		break;
	case EATINGDINER:
		break;
	case EATINGHOME:
		break;
	case WORKLONG:
		break;
	case WORKSHORT:
		break;
	case SHOPPING:
		break;
	case ATPUB:
		break;
	default:
		break;
	}
	return AgentState();
}
