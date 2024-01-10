#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    // Edge case
    if(n==0){
        return n;
    }
    int digit_sum=0;
    for(int i=n;i>0;i/=10){
        digit_sum+=i%10;
    }
    return digit_sum;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        // continueKeyword(n);
        int answer = sumOfDigits(n);
        cout<<"The sum of digits of a number is: "<<answer<<endl;
    } 
    return 0;
}