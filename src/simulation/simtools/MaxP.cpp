#include "simulation/ToolCommon.h"
#include "simulation/Air.h"
//#TPT-Directive ToolClass Tool_MaxP TOOL_MAXP 99
Tool_MaxP::Tool_MaxP(){
	Identifier = "DEFAULT_TOOL_MAXP";
	Name = "MAXP";
	Colour = PIXPACK(0xFFFFFF);
	Description = "MAXP, changes the pressure to the max pressure";
}



int Tool_MaxP::Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength){
	sim->air->pv[y / CELL][x / CELL] = 256.0f;
	return 1;
}

Tool_MaxP::~Tool_MaxP() {}