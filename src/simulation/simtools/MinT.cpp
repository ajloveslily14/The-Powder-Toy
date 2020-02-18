#include "simulation/ToolCommon.h"

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength);

void SimTool::Tool_MinT()
{
	Identifier = "DEFAULT_TOOL_MINT";
	Name = "MINT";
	Colour = PIXPACK(0x2B00FF);
	Description = "Sets the target elements temperature to the min temperature";
	Perform = &perform;
}

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength)
{
	if (!cpart)
		return 0;
	cpart->temp = MIN_TEMP;
	return 1;
}
