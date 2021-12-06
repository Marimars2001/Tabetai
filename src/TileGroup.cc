#include "TileGroup.hh"

TileGroup::TileGroup(sf::RenderWindow* window)
{
    GenerateTiles();
    this-> window = window;
}

TileGroup::~TileGroup()
{
}

void TileGroup::GenerateTiles()
{

}

void TileGroup::Draw()
{
    for (auto& Tile : *tiles)
    {
        this->Draw();
    }
}