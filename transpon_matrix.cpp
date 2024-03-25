#include <iostream>
/*

float arr out(float arr[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";

    }
return arr;

}
*/

int main() {
    float matrix[4][4];
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Enter string\n";
        for (int j = 0; j < 4; j++)
        {
            std::cin >> matrix[i][j];
        }
}
std::cout << "\n";
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
    {
        std::cout << matrix[i][j] << " ";
    }
    std::cout << "\n";
}   

    for (int i = 0; i < 3; i++)
    {
        for (int j = 1 + i; j < 4; j++)
        {
            float tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }

    std::cout << "\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}