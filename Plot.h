#pragma once
#include <string>
enum PlotProperty{
	NOBODY=0,
	OTHERS,
	SELF,
	FATE,
	CHANCE,
	PRISON,
	START
};
class Plot{
private:
	std::string plotName;
	int plotID;
public:
	Plot();
	~Plot();
	PlotProperty whatPlot();
	std::string getName();
	int getID();
};

