#include <bits/stdc++.h>
using namespace std;

int addDigit(int n)
{
    // edge case
    if (n == 0)
        return n;
    /*return (n%9==0)?9:n%9;      Using Ternary Operator */
    if (n % 9 == 0)
        return 9;
    else
        return n % 9;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int answer = addDigit(n);
        cout << answer << endl;
    }
    return 0;
}
