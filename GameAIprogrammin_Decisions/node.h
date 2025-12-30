#pragma once
#include "enums.h"
#include "agent.h"


class Node
{
	Node* childTrue;
	Node* childFalse;

	AgentState WalkTree(int time, Agent agent);
};