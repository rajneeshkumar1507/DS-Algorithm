#include<bits/stdc++.h>
using namespace std;

/*
    Note: A number X is a perfect number if the
    sum of proper divisor of the number is equal
    to X itself

    Time Complexity: O(sqrt(n))
*/

bool perfectNumber(int n){
    int sum = 1; // 1 because every number is divisible by 1 
    for(int i = 2; i*i<= n;i++){
        if(n % i == 0){
            sum+=i;
            if(i != n / i){
                sum += n / i;
            }
        }
    }
    return sum == n;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<< (perfectNumber(n) ? "Perfect Number" : "Not a Perfect Number")<<endl;
    }
    return 0;
}