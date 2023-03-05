#include <iostream>

using namespace std;

void MultiplicationTable();

int main()
{
    MultiplicationTable();
    return 0;
}


void MultiplicationTable()
{
    int rowNumber;
    int columnNumber;

    cout << "Enter the number of rows\n";
    cin >> rowNumber;
    cout <<"Enter the number of columns\n";
    cin>> columnNumber;

for(int i = 0;i<=rowNumber;i++){

    for(int factor1=0; factor1<rowNumber+1; factor1++)
    {

        if(factor1==0) {
            cout << "\t";
        }
        else
        {
           cout << factor1 <<"\t";

        }

    }
for (int factor2=0;factor2<=columnNumber;factor2++)
        {
             if(factor2==0) {
            cout << "\t"<< endl;
        }
        else
        {
           cout << factor2 <<"\t"<< endl;
        }
         cout << factor1*factor2;

        }

}

}
