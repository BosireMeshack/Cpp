#include <iostream>

using namespace std;

bool even_odd(int num);
int main()
{
    int number;
    cout << "Enter an integer\n";
    cin >> number;
    even_odd(number);
    return 0;
}

bool even_odd(int num)
{
    int answer = num%2;
    if (answer == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
