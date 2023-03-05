#include <iostream>
#include <vector>
using namespace std;
//void selectionSort(vector <int> arr);
int main()
{
vector <int> arr ={4, 2, 6, 1, 3, 7, 5};
int least;
    int temp;
    int array_length=arr.size();

    for(int i=0;i<array_length;i++)
    {
        least=i;
        for(int j=i+1;j<array_length;j++)
        {
            if(arr[j]<arr[least])
            {
                least=j;
            }
        }
        temp=arr[least];
        arr[least]=arr[i];
        arr[i]=temp;
        for(int l=0;l<array_length;l++)
        {
            cout<<arr[l]<<" ";
        }
        cout <<endl;
    }
    /*for(int a=0;a<array_length;a++)
    {
        cout<<arr[a]<<" ";
    }
    cout <<endl;*/
    return 0;
}
/*void selectionSort()
{
    int least;
    int temp;
    int array_length=arr.size();

    for(int i=0;i<array_length;i++)
    {
        least=i;
        for(int j=i+1;j<array_length;j++)
        {
            if(arr[j]<arr[least])
            {
                least=j;
            }
        }
        temp=arr[least];
        arr[least]=arr[i];
        arr[i]=temp;
        for(int l=0;l<array_length;l++)
        {
            cout<<arr[l]<<" ";
        }
        cout <<endl;
    }
    for(int a=0;a<array_length;a++)
    {
        cout<<arr[a]<<" ";
    }
    cout <<endl;
}

*/

