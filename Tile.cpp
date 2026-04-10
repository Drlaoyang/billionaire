#include "Tile.h"

Tile::Tile() {
	tileName = "";
	tileIndex = NULL;
	tileType = None;
}

Tile::Tile(std::string tileName, int tileIndex, TileType tileType) {
	this->tileName = tileName;
	this->tileIndex = tileIndex;
	this->tileType = tileType;
}
