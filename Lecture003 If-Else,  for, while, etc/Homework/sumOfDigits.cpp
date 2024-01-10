#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int answer = sumOfDigit(n);
        cout << answer << endl;
        ;
    }
    return 0;
}