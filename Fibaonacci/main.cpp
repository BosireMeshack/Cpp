
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <windows.h>
using namespace std;

#define SIZE 10
void Fibonacci();
void Fibonacci2();

//C++ Implementation to sort a given matrix
//Function to sort the given matrix
void sortMat(int Mat[SIZE][SIZE], int n)
{
    //temporary matrix of size n*2
    int temp[n*n];
    int k=0;
    //copy the values of the matrix one by one into temp

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             temp[k++]=Mat[i][j];
            //sort Temp
            if(temp>temp+k)
            {
                swap(temp,temp+k);
            }
          //  sort(temp,temp+k);
        }
    }

    //copying values of temp[] one by one into Mat[][]

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            Mat[i][j]=temp[k++];
        }
    }
}
//Function o print the given matrix

void printMat(int Mat[SIZE][SIZE],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << Mat[i][j] << " ";
            cout << endl;
        }
    }
}

int Fibonacci3(int);

int main()
{
    //Fibonacci();
    //Fibonacci2();
    /*int n,m=0,counter;

cout << "Enter the number of terms:";
cin>>n;
//accepting terms
cout << "Fibonacci series:";
for(counter=1;counter<=n;counter++)
{
    cout <<""<<Fibonacci3(m);
    m++;
}*/

int Mat[SIZE[SIZE] = {{5,4,7},
                    {1,3,8},
                    {2,9,6}};

                    int n=3;
                    cout <<"Orginal matrix\n";
                    printMat(Mat,n);
                sortMat(Mat,n);

                cout << "\n Matrix After Sorting\n";
                printMat(Mat,n);
    return 0;
}

void Fibonacci()
{
    int first=0, second =1, n,counter,sum = 0;

    cout << "Enter the number of integers for Fibanicci series N:" ;
    cin >> n;

    for(int counter=0;counter<n;counter++)
    {
        if(counter<=1)
        {
            sum = counter;
        }
        else
        {
            sum = first + second;
            first=second;
            second= sum;

        }
        cout << sum;
    }
}

void Fibonacci2()
{    int sum = 0,number,first=0,second=1,counter;

    cout << "Enter a number\n";
    cin >>number;
    cout << first<<second;
    sum = first+second;
    while(sum<number)
    {
        cout << sum;
        first=second;
        second = sum;
        sum = first+second;
        //cout << sum;

    }

}

int Fibonacci3(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
        return(Fibonacci3(n-1)+Fibonacci3(n-2));
    }
}


