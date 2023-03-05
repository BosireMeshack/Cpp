#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>

using namespace std;

void Matrix();
void VowelConsonantCounter();
void Matrix1();
void Matrix2();
int main()
{
   VowelConsonantCounter();
   //Matrix1();
   //Matrix2();
  /* int a =5;
   int b =6;
   a = (b--)+3;
   cout <<a;*/

    return 0;
}

void VowelConsonantCounter()
{
    char Sentence[100];
    int vowelcounter=0;
    int consonantcounter=0;

    cout << "Enter a string\n";
    gets(Sentence);

   // cout << Sentence.length();
    for(int counter =0; counter<100;counter++)
    {


        if(Sentence[counter]== 'A'||Sentence[counter]=='E'||Sentence[counter]=='I'||Sentence[counter]=='O'||Sentence[counter]=='U'||Sentence[counter]=='a'||Sentence[counter]=='e'||Sentence[counter]=='i'||Sentence[counter]=='o'||Sentence[counter]=='u')
        {
            ++vowelcounter;
        }
        else if((Sentence[counter]>='a' && Sentence[counter]<='z') || (Sentence[counter] >='A' && Sentence[counter] <= 'Z'))
        {
            ++consonantcounter;
        }

    }
    cout <<"Number of consonants:" << consonantcounter << endl;
    cout << "Number of vowels:"<< vowelcounter;

}

void Matrix()
{
    int Matrix[10][6];

    cout << "Enter the values of the row and column\n";

    for(int row =0;row<3;row++)
    {
        for(int column=0;column<3;column++)
        {
            cout << "Enter the row" <<row<<"column"<<column << endl;
            cin>>Matrix[row][column];
        }
    }


    for(int row =0;row<3;row++)
    {
        for(int column=0;column<3;column++)
        {
            cout <<Matrix[row][column]<<" ";
        }
        if(row<row+1)
        {
            cout << endl;
        }
    }
}

void Matrix1()
{
    int Matrix[5][6] = {{13,4,3,5,2,14},{19,7,45,3,6,17},{12,86,23,65,33,86},{45,43,12,75,12,55},{60,56,76,50,86,23}};

    for(int row=0; row<5;row++)
    {
        for(int column=0;column<6;column++)

        {
            if(Matrix[row][column]>Matrix[row][column+1])
            {
                swap(Matrix[row][column],Matrix[row][column+1]);
            }

        }
    }
    for(int row=0;row<5;row++)
    {
        for(int column=0;column<6;column++)
        {
            cout << Matrix[row][column]<< " ";

        }
        if(row<row+1)
            cout << endl;
    }
}

void Matrix2()
{
    int rows;
    int columns;
    int factor1;
    int factor2;
    //int MultiplicationTable[rows][columns];

    cout << "Please enter the number of rows\n";
    cin>>rows;
    cout <<"Please enter the number of columns\n";
    cin>>columns;
    for(factor1=0;factor1<=rows ;factor1++)
    {
        if(factor1==0)
        {
          cout <<0 << endl;
        }

        else{
 cout << factor1+1 << endl;
        for(factor2=1;factor2<=columns;factor2++)
        {

            cout<<setw(4) <<factor1*factor2;
        }
        }
        cout << endl;
    }
}
