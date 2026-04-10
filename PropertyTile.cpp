#include "PropertyTile.h"

PropertyTile::PropertyTile(
	std::string tileName,
	int tileIndex,
	int price,
	colorGroup color, 
	int rent[6], 
	int housePrice
) 
	: Tile(tileName,tileIndex,TileType::PropertyType) {
	this->color = color;
	this->price = price;
	this->housePrice = housePrice;
	for (int i = 0; i < 6; i++) {
		this->rent[i] = rent[i];
	}
}
