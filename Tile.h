#pragma once
#include <string>
#include "Player.h"
#include "GameEngine.h"
enum TileType {
	PropertyTile,
	StationTile,
	UtilityTile,
	TaxTile,
	GoToJailTile,
	JailTile,
	FreeParkingTile,
	GoTile,
	ChanceTile,
	FateTile
};

class Tile {
private:
	std::string tileName;
	int tileIndex;
	TileType tileType;
public:
	Tile();
	~Tile();
	virtual void onLand(Player* player, GameEngine* engine) = 0;
	virtual TileType getTileType();
};
