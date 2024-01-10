#include<bits/stdc++.h>
using namespace std;

void sumOfDigitFromLtoR(int left, int right)
{
    /*
    Find the sum of digits from Left to Right
    ex: 830(left), 850(right)
    830->11
    831->12
    and so on.
*/
    for (int number = left; number <= right; number++)
    {
        int sum = 0;
        for (int rem = number; rem > 0; rem /= 10)
        {
            sum += rem % 10;
        }
        cout << "Sum of digit of the number " << number << " is: " << sum << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int left, right;
        cin >> left >> right;
        sumOfDigitFromLtoR(left, right);
    }
    return 0;
}