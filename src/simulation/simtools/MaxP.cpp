#include "simulation/ToolCommon.h"
#include "simulation/Air.h"

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength);

void SimTool::Tool_MaxP()
{
	Identifier = "DEFAULT_TOOL_MAXP";
	Name = "MAXP";
	Colour = PIXPACK(0xFFFFFF);
	Description = "MAXP, changes the pressure to the max pressure";
	Perform = &perform;
}

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength)
{
	sim->air->pv[y / CELL][x / CELL] = 256.0f;
	return 1;
}
