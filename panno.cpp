#include <iostream>
int main () {

int arr[10][10];
for (int i = 0; i < 10; i++)
{
  for (int j = 0; j < 10; j++)
  {
    arr[j][i] = 0;
  } 
}
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
       {
        std::cout << arr[j][i] << " ";

       }
      std::cout << "\n"; 
}
std::cout << "\n";
for (int i = 0; i < 10; i++)
{
    
    arr[0][i] = 1;
    arr[9][i] =1;
    arr[i][0] = 1;
    arr[i][9] = 1;
    arr[i][i] = 7;
    arr[9 - i][i] = 7;
    arr[9][0] = 7;
}

for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        std::cout << arr[j][i] << " ";
    }
    std::cout << "\n";
}
}