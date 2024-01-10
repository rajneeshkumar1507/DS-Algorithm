#include<bits/stdc++.h>
using namespace std;

void printEvenDivisibleBy7(int n){
    for(int i=14;i<=n;i+=7){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printEvenDivisibleBy7(n);
    }
    return 0;
}