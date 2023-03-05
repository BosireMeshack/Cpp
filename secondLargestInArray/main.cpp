#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int secondLargestInArray(int myArray[], int arraySize);
int main()
{
    int Numbers[] = {20,40,1,42,72,64,23};
    int arraySize = 6;
    secondLargestInArray(Numbers,arraySize);
    return 0;
}

int secondLargestInArray(int myArray[], int arraySize)
{
    for(int counter =0;counter<arraySize;counter++)
    {
        for(int index=0;index<arraySize-1;index++)
        {
            if(myArray[index]>myArray[index+1])
            {
                swap(myArray[index],myArray[index+1]);
            }
        }
    }
    cout << myArray[arraySize-2];

}
