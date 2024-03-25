#include <iostream>


int main() {

int presence[10][5];




for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 5; j++)
    {
         presence[i][j] = i+j;
    }


    
}

for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 5; j++)
    {
        std::cout << presence[i][j] << "\t";
    }
    std::cout << "\n";
}
}