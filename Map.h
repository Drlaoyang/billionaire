#pragma once
#include <vector>
#include "Tile.h"
class Map {
private:
	std::vector<Tile> map;
public:
	Map();
	~Map();
};

