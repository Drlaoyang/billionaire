#pragma once
#include <string>
#include "Player.h"
#include "GameEngine.h"
enum TileType {
	None,
	PropertyType,
	StationType,
	UtilityType,
	TaxType,
	GoToJailType,
	JailType,
	FreeParkingType,
	GoType,
	ChanceType,
	FateType
};

class Tile {
private:
	std::string tileName;
	int tileIndex;
	TileType tileType;
public:
	Tile();
	Tile(std::string tileName, int tileIndex, TileType tileType);
	~Tile();
	virtual void onLand(Player* player, GameEngine* engine) = 0;
	virtual TileType getTileType();
};
