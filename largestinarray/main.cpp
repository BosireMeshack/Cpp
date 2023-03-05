//Function that takes in an array and array size, outputs largest integer in that array

#include <iostream>

using namespace std;

int largestInArray(int myArray[], int arraySize);
int main()
{
    int Numbers[] = {80,20,11,13,23,40};
    int sizeofArray = 6;
    largestInArray(Numbers,sizeofArray);

    return 0;
}

int largestInArray(int myArray[], int arraySize)
{
    int largestElement = 0;

    for(int i=0;i<arraySize;i++)
    {
        if(myArray[i]>largestElement)
        {
            largestElement=myArray[i];
        }
     }
    cout<< largestElement;

}
