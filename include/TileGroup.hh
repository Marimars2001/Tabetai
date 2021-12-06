#pragma once
#include "Tile.hh"
#include <iostream>

class TileGroup
{
    private:
        void GenerateTiles();
        std::vector<Tile*>* tiles;
        sf::RenderWindow* window{};
    public:
        TileGroup(sf::RenderWindow* window, const char* textureUrl);
        ~TileGroup();
        void Draw();
};