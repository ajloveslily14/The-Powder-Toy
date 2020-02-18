#include "simulation/ToolCommon.h"
#include "simulation/Air.h"

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength);

void SimTool::Tool_MinP()
{
	Identifier = "DEFAULT_TOOL_MINP";
	Name = "MINP";
	Colour = PIXPACK(0x000000);
	Description = "MINP, changes the pressure to the min pressure";
	Perform = &perform;
}

static int perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength)
{
	sim->air->pv[y / CELL][x / CELL] = -256.0f;
	return 1;
}
