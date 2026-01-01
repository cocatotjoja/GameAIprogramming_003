#pragma once
#include "enums.h"
#include "agent.h"


class Node
{
	Node* childTrue;
	Node* childFalse;
	Agent currentAgent;

	AgentState WalkTree(int time, Agent agent);
};