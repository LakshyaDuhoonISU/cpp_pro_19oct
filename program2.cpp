// program to use a function to calculate power of a number
#include <iostream>
using namespace std;

int power(int n, int b)
{
    int power = 1;
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return n;
    }
    else if (b > 1)
    {
        for (int i = 1; i <= b; i++)
        {
            power = power * n;
        }
        return power;
    }
    else
    {
        for (int i = -1; i >= b; i--)
        {
            power = power * n;
        }
        return power;
    }
}

int main()
{
    int b, e, c;
    cout << "Enter base: ";
    cin >> b;
    cout << "Enter exponent: ";
    cin >> e;
    c = power(b, e);
    cout << b << "^" << e << " = " << c << endl;
    return 0;
}