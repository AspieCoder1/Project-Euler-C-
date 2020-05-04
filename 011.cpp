#include <iostream>
#include <fstream>

int main()
{
    int grid[20][20];
    std::ifstream file;
    file.open("011.txt");
    if (file.fail())
        return -1;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            file >> grid[i][j];
        }
    }

    long answer = 0;
    long current = 0;
    for (int y = 0; y < 20; y++)
    {
        current = 1;
        for (int x = 0; x < 20; x++)
        {
            // Check down
            if (y + 3 < 20)
            {
                current = grid[x][y] * grid[x][y + 1] * grid[x][y + 2] * grid[x][y + 3];
                answer = std::max(answer, current);
            }
            // check right
            if (x + 3 < 20)
            {
                current = grid[x][y] * grid[x + 1][y] * grid[x + 2][y] * grid[x + 3][y];
                answer = std::max(answer, current);
            }
            // check diagontal left
            if (x + 3 < 20 && y + 3 < 20)
            {
                current = grid[x][y] * grid[x + 1][y + 1] * grid[x + 2][y + 2] * grid[x + 3][y + 3];
                answer = std::max(answer, current);
            }
            // check diagonal right
            if (x - 3 > 0 && x + 3 < 20)
            {
                current = grid[x][y] * grid[x + 1][y - 1] * grid[x + 2][y - 2] * grid[x + 3][y - 3];
                answer = std::max(answer, current);
            }
        }
    }
    std::cout << "Answer: " << answer << "\n";
}