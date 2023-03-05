#include <iostream>

using namespace std;

int findLargest(int d, int e, int f);
int main()
{
    int d;
    int e;
    int f;
    cout << "Enter three numbers\n";
    cin >> d>>e>>f;
    findLargest(d,e,f);


    return 0;
}

int findLargest(int a, int b, int c)
{
    int largest=a;

    if(largest<b)
    {
        largest=b;
    }
    if(largest<c)
    {
        largest=c;
    }


}
