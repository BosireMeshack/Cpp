#include <iostream>

using namespace std;
int sum2DArray(int myArray[][4], int diml);
int main()
{
   int dimension = 3;
   int myArray[][4] = {{1, 2, 3, 1},{4, 5, 6, 1}, {7, 8, 9, 1}};
    sum2DArray(myArray,dimension);
    return 0;
}

int sum2DArray(int myArray[][4], int diml)
{
    int sum=0;
    for(int j=0;j<diml;j++)
    {
        for(int k=0;k<4;k++)
        {
            sum = sum + myArray[j][k];
        }
    }
   cout << sum;
}
