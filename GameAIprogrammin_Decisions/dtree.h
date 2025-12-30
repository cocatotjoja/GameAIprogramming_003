#pragma once
#include "enums.h"
#include "node.h"
#include "agent.h"

class Dtree
{
	Node* work;
	Node* sleep;
	Node* eat;
	Node* shopping;
	Node* pub;

	AgentState ChangeState(int time, Agent agent);
};
