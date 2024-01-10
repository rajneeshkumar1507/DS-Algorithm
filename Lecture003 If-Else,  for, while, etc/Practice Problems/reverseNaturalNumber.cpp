#include<bits/stdc++.h>
using namespace std;

void naturalNumber(int n){
    // for(int i=n;i>0;i--){
    //     cout<<i<<" ";
    // }
    int i=n;
    while(i>0){
        cout<<i<<" ";
        i--;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        naturalNumber(n);
    }
    return 0;
}