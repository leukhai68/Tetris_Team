#pragma once
#include <iostream>
#include <raylib.h>
#include <vector>
using namespace std;

class Grid{
    public :
        Grid();
        void Initialize();
        void Print();
        void Draw();
        bool IsCellOutside(int row, int column);
        bool IsCellEmpty(int row, int column);
        int grid[20][10];
      
    private :
        vector<Color> GetCellColors();
        int numRows;
        int numCols;
        int cellSize;
        vector<Color> colors;
};