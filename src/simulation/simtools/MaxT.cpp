#include "simulation/ToolCommon.h"
//#TPT-Directive ToolClass Tool_MaxT TOOL_MAXT 97
Tool_MaxT::Tool_MaxT()
{
	Identifier = "DEFAULT_TOOL_MAXT";
	Name = "MAXT";
	Colour = PIXPACK(0xFF00D4);
	Description = "Sets the target elements temperature to the max temperature";
}

int Tool_MaxT::Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength)
{
	if (!cpart)
		return 0;
	cpart->temp = MAX_TEMP;
	return 1;
}

Tool_MaxT::~Tool_MaxT() {}