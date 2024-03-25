#include <iostream>

int main() {
//float m1[4][4];
//float m2[4][4];
float m3[4][4];

float m1[4][4] = {{1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};

float m2[4][4] = {{1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};

for (int i = 0; i < 4; i++)
{
    for (int j = 0; j< 4; j++)
    {
        float sum = 0;
        for (int k = 0; k < 4; k++)
        {

          sum += m1[i][k] * m2[k][j];
           
        }
          m3[i][j] = sum;  
    }
}
for (int i = 0; i < 4; i++)
   {
    for (int j = 0; j < 4; j++)
       {
         std::cout << m1[i][j] << " ";

       }
       std::cout << "\n";
   }
   std::cout << "\n";

   for (int i = 0; i < 4; i++)
   {
       for (int j = 0; j < 4; j++)
       {
           std::cout << m2[i][j] << " ";
       }
       std::cout << "\n";
   }
   std::cout << "\n";
   for (int i = 0; i < 4; i++)
   {
       for (int j = 0; j < 4; j++)
       {
           std::cout << m3[i][j] << " ";
       }
       std::cout << "\n";
   }
   std::cout << "\n";
}