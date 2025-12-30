#include "node.h"

AgentState Node::WalkTree(int time, Agent agent)
{
	// Walk tree
	// Check if condition is true or false
	if (true)
	{
		return childTrue->WalkTree(time, agent);
	}
    return childFalse->WalkTree(time, agent);
}
