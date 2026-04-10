#pragma once
#include "Tile.h"

enum colorGroup {
	red,
	pink,
	green,
	blue,
	golden,
	brown,
	cyan,
	yellow,
	orange
};

class PropertyTile : public Tile {
private:
	int price; //Rent(0~5), HouseUnitPrice(6)Price(7)
	int rent[6];
	int housePrice;
	int houseNum = 0;
	colorGroup color;
	Player* owner = nullptr;
	bool isPledged = false;
public:
	PropertyTile(
		std::string tileName, 
		int tileIndex,
		int price, 
		colorGroup color,
		int rent[6], 
		int housePrice
	);

};

