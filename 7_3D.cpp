#include <iostream>
void show (int space[5][5][10], int level)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << space[i][j][level] << " ";
        }
        std::cout << "\n";
    }
}

int main() {
int world[5][5][10];

int heigth = 0;
int level = 0;

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 10; k++)
        {
            world[i][j][k] = 0;
        }
    }
}
std::cout << "Let's begin 'heigth' entering.\n" << "There are 25 items there (5 x 5)\n";
for (int i = 0; i < 5; i++)
  {
      for (int j = 0; j < 5; j++)
      {
        do
        {
        std::cout << "Enter heigth from 0 to 10 \n";
        std::cin >> heigth;
        } while (heigth < 0 || heigth > 10);
        std::cout << "Correct heigth.  \n";
         for (int k = 0; k < heigth; k++)
         {
            world[i][j][k] = 1; 
         }
      }
  }
while (true)
{
    do 
    {
    std::cout << "Enter level from 0 to 9: ";
    
    std::cin >> level;
    } while (level < 0 || level > 9);
    std::cout << "Correct level.   \n";

    show(world, level);
}
  




}