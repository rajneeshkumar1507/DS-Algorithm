#include<bits/stdc++.h>
using namespace std;
void print1ToN(int n){
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
}
int main()
{
        int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print1ToN(n);
    }
    return 0;
}