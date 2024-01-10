#include<bits/stdc++.h>
using namespace std;

void problemOnBreakKeyword(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if((i%2==0) && (i%7==0)){
            cout<<i<<" ";
            sum+=i;
        }
        if(sum>100){
            cout<<endl<<"Sum is: "<<sum;
            break;
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
        problemOnBreakKeyword(n);
    }
    return 0;
}