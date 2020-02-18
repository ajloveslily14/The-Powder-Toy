#include "simulation/ToolCommon.h"

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength);

void SimTool::Tool_MaxT()
{
	Identifier = "DEFAULT_TOOL_MAXT";
	Name = "MAXT";
	Colour = PIXPACK(0xFF00D4);
	Description = "Sets the target elements temperature to the max temperature";
	Perform = &perform;
}

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength)
{
	if (!cpart)
		return 0;
	cpart->temp = MAX_TEMP;
	return 1;
}
