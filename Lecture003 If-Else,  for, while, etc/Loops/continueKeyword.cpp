#include<bits/stdc++.h>
using namespace std;

void continueKeyword(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        else{
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
        continueKeyword(n);
    } 
    return 0;
}