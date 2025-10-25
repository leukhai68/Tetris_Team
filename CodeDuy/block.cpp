#include "block.h"
#include <raylib.h>
#include <vector>
#include "grid.h"
using namespace std;

Block::Block(){
    cellSize = 30;
    rotationState = 0;
    colors = GetCellColors();
    rowOffset = 0;
    columnOffset = 0;
}

void Block::Draw()
{
    std::vector<Position> tiles = GetCellPosition();
    for (Position item : tiles)
    {
        DrawRectangle(item.column * cellSize + 1,
                      item.row    * cellSize + 1,
                      cellSize - 1, cellSize - 1,
                      colors[id]);
    }
}


void Block::Move(int rows, int columns){
    columnOffset += columns;  
    rowOffset    += rows;    
}

vector<Position> Block::GetCellPosition(){
    vector<Position> tiles = cells[rotationState];
    vector<Position> movedTiles;
    for(Position item : tiles){
        Position newPos = Position(item.row + rowOffset, item.column + columnOffset);
        movedTiles.push_back(newPos);
    }
    return movedTiles;
}

vector<Color> Block::GetCellColors()
{
    Color darkGrey = {26, 31, 40, 255};
    Color green = {47, 230, 23, 255};
    Color red = {232, 18, 18, 255};
    Color orange = {226, 116, 17, 255};
    Color yellow = {237, 234, 4, 255};
    Color purple = {166, 0, 247, 255};
    Color cyan = {21, 204, 209, 255};
    Color blue = {13, 64, 216, 255}; 

    return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
}