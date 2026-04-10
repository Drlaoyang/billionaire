#pragma once
#include <string>
#include <vector>
#include "PropertyTile.h"
class Player {
private:
	std::string name;
	int playerID;
	int currentMoney;
	int currentIndex;
	std::vector<PropertyTile*> streets;
};

