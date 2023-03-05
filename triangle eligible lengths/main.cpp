#include <iostream>

using namespace std;

int base;
int height;
int hypotenuse;

bool triangle_eligible_lengths(int base, int height, int hypotenuse);

int main()

{
    triangle_eligible_lengths( base, height,hypotenuse);
    return 0;
}


bool triangle_eligible_lengths(int base, int height , int hypotenuse)
{


    cout << "Enter the base\n";
    cin>>base;
    cout << "Enter the height\n";
    cin>> height;
    cout << "Enter the hypotenuse\n";
    cin>>hypotenuse;

    if (base<=0||height<=0||hypotenuse<=0)
    {
        return false;
    }
    else if(base+height <=hypotenuse||base+hypotenuse<=height||hypotenuse+height<=base)
    {
        return false;
    }
    else
    {
        return true;
    }
}
