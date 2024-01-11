#include<bits/stdc++.h>
using namespace std;

void commonFactors(int a, int b){
    int count=0;
    for(int i=1;i<=a;i++){
        if((a%i==0) && (b%i==0)){
            cout<<i<<" ";
            count++;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a, b;
        cin>>a>>b;
        commonFactors(a,b);
    }
    return 0;
}