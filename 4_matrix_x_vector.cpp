#include <iostream>
#include <vector>
int main()
{
    float a[4][4];

    std::cout << "Input matrix 4x4:\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> a[i][j];
        }
    }
    std::vector<float> b(4);
    std::cout << "Input vector :\n";
    for (int i = 0; i < 4; i++)
    {
        std::cin >> b[i];
    }
    std::vector<float> c;
    for (int i = 0; i < 4; i++)
    {
        float sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += a[i][j] * b[j];
        }
        c.push_back(sum);
    }
    std::cout << "Result:\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << c[i] << " ";
    }
}