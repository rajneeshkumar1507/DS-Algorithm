#include <bits/stdc++.h>
using namespace std;

bool checkLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int year;
        cin >> year;
        if (checkLeapYear(year))
        {
            cout << year << " is a leap year!" << endl;
        }
        else
        {
            cout << year << " is a not leap year!" << endl;
        }
    }
    return 0;
}
