#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    //edge case
    if(n==0){
        return n;
    }
    int digitCount = 0;
    for(int i=n;i>0;i/=10){
        digitCount++;
    }
    return digitCount;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        // continueKeyword(n);
        int answer = countDigits(n);
        cout<<"Number of Digits: "<<answer<<endl;
    } 
    return 0;
}