#include <iostream>

int main()
{
    int packages[2][6] = {{4, 3, 3, 3, 3, 3}, {4, 3, 3, 3, 3, 3}};
    int plates[2][6] = {{3, 2, 2, 2, 2, 2}, {3, 2, 2, 2, 2, 2}};
    int chairs[2][6] = {{1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}};
    std::cout << "State Before:\n \n";
    std::cout << "Packages\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << packages[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "Plates\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << plates[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "Chairs\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << chairs[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    chairs[0][5] += 1;
    packages[1][3] -= 1;
    packages[0][0] -= 1;
    packages[1][3] += 1;
    plates[0][0] -= 1;

    std::cout << "State After:\n \n";
    std::cout << "Packages\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << packages[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "Plates\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << plates[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "Chairs\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << chairs[i][j] << " ";
        }
        std::cout << "\n";
    }
}