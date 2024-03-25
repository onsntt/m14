#include <iostream>
bool is_same(int m1[4][4], int m2[4][4])
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (m1[i][j] != m2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
void diagonal_matrix(int m[4][4])
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (i != j)
            {
                m[i][j] = 0;
            }
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int m1[4][4];
    int m2[4][4];
    std::cout << "Enter the values of the first matrix: \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> m1[i][j];
        }
        // std::cout <<"Next row: ";
    }

    std::cout << "Enter the values of the second matrix: \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> m2[i][j];
        }
        // std::cout <<"Next row: ";
    }
    if (is_same(m1, m2))
    {
        std::cout << "\n The matrices are equal \n";
        std::cout << "Here is the diagonal view of it: \n";
        diagonal_matrix(m1);
    }
    else
    {
        std::cout << "The matrices are not equal";
        return 0;
    }
}