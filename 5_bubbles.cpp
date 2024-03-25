#include <iostream>
bool empty(bool matrix[12][12])
{
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            if (matrix[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

void draw(bool matrix[12][12])
{
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            if (matrix[i][j])
            {
                std::cout << "0 ";
            }
            else if (!matrix[i][j])
            {
                std::cout << "X ";
            }
        }
        std::cout << "\n";
    }
}

int main()
{
    bool field[12][12];
    /*
    for (int i = 0; i < 12; ++i)
      {
        for (int j = 0; j < 12; ++j)
          {
            field[i][j] = true;
            std::cout << "0" << " ";
          }
        std::cout << "\n";
      }
    */
    for (int i = 0; i < 12; ++i)
    {
        for (int j = 0; j < 12; ++j)
        {
            field[i][j] = true;
        }
    }
    draw(field);
    int x1, y1, x2, y2;
    while (!empty(field))
    {
        do
        {
            std::cout << "Enter the coordinates of the first point: ";
            std::cout << "Row (0 - 11): ";
            std::cin >> x1;
            std::cout << "Column (0 - 11): ";
            std::cin >> y1;

            std::cout << "Enter the coordinates of the second point: ";
            std::cout << "Row (0 - 11): ";
            std::cin >> x2;
            std::cout << "Column (0 - 11): ";
            std::cin >> y2;
        } while (x1 < 0 || x1 > 11 || y1 < 0 || y1 > 11 || x2 < 0 || x2 > 11 || y2 < 0 || y2 > 11);
        for (int i = x1; i <= x2; ++i)
        {
            for (int j = y1; j <= y2; ++j)
            {
                if (field[i][j] == true)
                {
                    std::cout << "PUP!\n";
                }
                field[i][j] = false;
            }
        }
        /*
    for (int i = 0; i < 12; ++i)
      {
        for (int j = 0; j < 12; ++j)
          {
            if (field[i][j])
            {
              std::cout << "0" << " ";
            }
            else
                {
                    std::cout << "X" << " ";
                }
          }
        std::cout << "\n";
      }

    */

        draw(field);
    }
}