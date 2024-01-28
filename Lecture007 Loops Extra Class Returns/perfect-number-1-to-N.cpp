#include<bits/stdc++.h>
using namespace std;

/*
    Note: A number X is a perfect number if the
    sum of proper divisor of the number is equal
    to X itself

    Time Complexity: O(n*sqrt(n))
*/

bool isPerfectNumber(int num){
    int sum = 1;    // 1 because every number is divisible by 1 
    int sq = sqrt(num);
    for(int i = 2; i <= sq; i++){
        if(num % i == 0){
            sum += i;
            if(i != num / i)
                sum += num / i;
        }
    }
    return sum == num;
}
vector<int> perfectNumbers1toN(int n){
    vector<int> perfectNumbers;
    for(int i = 1; i <= n; i++){
        if(isPerfectNumber(i)){
            perfectNumbers.push_back(i);
        }
    }
    return perfectNumbers;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans = perfectNumbers1toN(n);
        cout<<"Perfect Numbers till "<<n<<" are: ";
        for(int  i: ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}