#include "iostream"
#include "vector"

using namespace std;

//! This starts from the center, so if its 50, 50, then it will increase both to 51 and start from 25,25
struct Room
{
    size_t xStart, yStart, width, height;
};

size_t hallWidth = 1; // Width of the hallways

char wallChar = 'W';  // Character for the walls
char floorChar = '#'; // Character for the floor
//! Rooms start at the X, Y defined and go to the right and down from that point to generate that room




void hallwaySimpleGenerator(size_t row, size_t col, bool touchBorderEnd, int setHallwayCount);
void rpgSimpleGenerator(size_t row, size_t col);

int main()
{
    //! The boolean value makes it so that if the hallway touches the border wall, it will end there. Else it will continue and use setHallwayCount to determine how many hallways to generate; 
    size_t rpgRow = 50;
    size_t rpgCol = 50;
    int setHallWayCount = 3;

    hallwaySimpleGenerator(rpgRow, rpgCol, false, setHallWayCount);
    //rpgSimpleGenerator(rpgRow, rpgCol);


    return 0;
}
//! This is a simple hallway generator, it will create hallways, starting from the center of the map

void hallwaySimpleGenerator(size_t row, size_t col, bool touchBorderEnd, int setHallwayCount)
{
    int randomDirectionAmount;
    int turnDirection;



    if (row % 2 == 0)
    {
        row += 1;
    }
    if (col % 2 == 0)
    {
        col += 1;
    }

    while (true)
    {
        vector<vector<char>> grid(row, vector<char>(col));

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
            }
        }
    }
}

void rpgSimpleGenerator(size_t row, size_t col)
{
    if (row % 2 == 0)
    {
        row += 1;
    }
    if (col % 2 == 0)
    {
        col += 1;
    }
    vector<vector<char>> grid(row, vector<char>(col));
}