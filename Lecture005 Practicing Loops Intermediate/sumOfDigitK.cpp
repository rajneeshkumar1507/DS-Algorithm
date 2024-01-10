#include <bits/stdc++.h>
using namespace std;


void sumOfDigitK(int n, int k)
{
    /*
        Given a value of N, print only
        those numbers from 1 to N that
        have sum of digits = K

        Ex: N = 100, K = 3
        3 -> 3
        12 -> 3
        21 ->3
        30 -> 3
    */
    for (int i = 1; i <= n; i++){
        int sum=0;
        for(int rem = i; rem > 0; rem/=10){
            sum += rem % 10;
        }
        if(sum==k){
            cout<<"For the number "<<i<<" sum of digits is equal to "<<k<<endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        sumOfDigitK(n, k);
    }
    return 0;
}