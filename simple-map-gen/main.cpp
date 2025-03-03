#include "iostream"
#include "vector"

using namespace std;


//! This starts from the center, so if its 50, 50, then it will increase both to 51 and start from 25,25
struct Room {
    size_t xStart, yStart, width, height;
};

size_t hallWidth = 1; //Width of the hallways

char wallChar = 'W'; //Character for the walls
char floorChar = 'F'; //Character for the floor
//! Rooms start at the X, Y defined and go to the right and down from that point to generate that room

void rpgSimpleGenerator(size_t row, size_t col);


int main()
{   
    size_t rpgRow = 50;
    size_t rpgCol = 50;
    rpgSimpleGenerator(rpgRow, rpgCol);    

    return 0;
}

void rpgSimpleGenerator(size_t row, size_t col){
    if (row % 2 == 0)
    {
        row += 1;
        //cout << ROW << endl; //*Need to remove later
    }
    if (col % 2 == 0)
    {
        col += 1;
        //cout << COL << endl; //*Need to remove later
    }
    vector<vector<char>> grid(row, vector<char>(col));
}