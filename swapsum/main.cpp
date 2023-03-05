#include <iostream>

using namespace std;

int swapsum(int *a, int *b);
int main()
{
    int d =10;
    int e =20;

    swapsum(&d,&e);

    return 0;
}

int swapsum(int *a, int *b)
{
    int art;
    art=*a;
    *a=*b;
    *b=art;
    int sum=*a+*b;
    cout << sum;
}
