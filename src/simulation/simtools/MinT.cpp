#include "ToolClasses.h"
//#TPT-Directive ToolClass Tool_MinT TOOL_MINT 96
Tool_MinT::Tool_MinT()
{
	Identifier = "DEFAULT_TOOL_MINT";
	Name = "MINT";
	Colour = PIXPACK(0x2B00FF);
	Description = "Sets the target elements temperature to the min temperature";
}

int Tool_MinT::Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength)
{
	if (!cpart)
		return 0;
	cpart->temp = MIN_TEMP;
	return 1;
}

Tool_MinT::~Tool_MinT() {}