#include<bits/stdc++.h>
using namespace std;

/*
    Note: A number X is a perfect number if the
    sum of proper divisor of the number is equal
    to X itself
*/

int perfectNumber(int n){
    int sum = 0;
    int half = n / 2;
    for(int i=1; i<= half;i++){
        if(n % i == 0) sum+=i;
    }
    return sum;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = perfectNumber(n);
        if(ans == n) cout<<n<<" is a perfect number"<<endl;
        else cout<<n<<" is not perfect number"<<endl;
    }
    return 0;
}