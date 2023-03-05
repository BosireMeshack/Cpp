#include <iostream>
#include<cstring>
#include<algorithm>


using namespace std;

int descendingOrder(string Numbers);
int main()
{

   descendingOrder("7684");
    return 0;
}

int descendingOrder(string Numbers)
{
    int characters=Numbers.length();

    for(int counter=0;counter<characters; counter++)
    {
        for(int j=0;j<characters;j++)
        {
            if(Numbers[counter]>Numbers[j])
            {
          int temp = Numbers[counter];
          Numbers[counter]=Numbers[j];
          Numbers[j]=temp;

            }
        }

    }
    for(int counter=0;counter<characters; counter++)
    {

           cout << Numbers[counter];


        }

    }





