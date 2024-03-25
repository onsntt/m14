#include <iostream>
bool winner(char desktop[3][3], char n)
{
    if (desktop[0][0] == n && desktop[0][1] == n && desktop[0][2] == n 
    || desktop[1][0] == n && desktop[1][1] == n && desktop[1][2] == n 
    || desktop[2][0] == n && desktop[2][1] == n && desktop[2][2] == n 
    || desktop[0][0] == n && desktop[1][0] == n && desktop[2][0] == n 
    || desktop[0][1] == n && desktop[1][1] == n && desktop[2][1] == n 
    || desktop[0][2] == n && desktop[1][2] == n && desktop[2][2] == n
    || desktop[0][0] == n && desktop[1][1] == n && desktop[2][2] == n
    || desktop[0][2] == n && desktop[1][1] == n && desktop[2][0] == n)
    
    return true;
    else return false;
}
int main()
{
    char desktop[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int x, y;
    int turn = 0;
    std::cout << "Let's play. X goes first. Cell 0,0 is left top. Cell 2,0 is left bottom\n";
    while (turn < 9)
    {
        while (x < 0 || x > 2 || y < 0 || y > 2 || desktop[x][y] != ' ')
        {
            std::cout << "Enter correct row and col coordinates of empty cell\n";
            std::cout << "Enter the coordinate of row : ";
            std::cin >> x;
            std::cout << "Enter the coordinate of column : ";
            std::cin >> y;
        }
        if (turn % 2 == 0)
        {
            if (desktop[x][y] == ' ')
            {
                desktop[x][y] = 'X';
                turn++;
            }
        }
        else
        {
            if (desktop[x][y] == ' ')
            {
                desktop[x][y] = 'O';
                turn++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << desktop[i][j] << " ";
            }
            std::cout << "\n";
        }
        if (winner(desktop, 'X')) 
        {
            std::cout << "X wins!";
            return 0;
        }
        else if (winner(desktop, '0'))
        {
            std::cout << "0 wins!";
            return 0;
        }
    }
    if (turn == 9)
    {
        std::cout << "No winner!";
    }
}