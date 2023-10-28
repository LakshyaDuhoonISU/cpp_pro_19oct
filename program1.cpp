//program to write a function to check if a year is a leap year
#include<iostream>
using namespace std;

bool leap(int year)
{
    if (year%400==0)
    {
        return true;
    }
    else if (year%100==0)
    {
        return false;
    }
    else if (year%4==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int y;
    cout<<"Enter a year: ";
    cin >> y;
    if (leap(y))
    {
        cout<<y<<" is a leap year."<<endl;
    }
    else
    {
        cout<<y<<" is not a leap year."<<endl;
    }
    return 0;
}