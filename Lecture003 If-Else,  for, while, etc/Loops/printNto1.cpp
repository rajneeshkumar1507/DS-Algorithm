#include<bits/stdc++.h>
using namespace std;

void printNto1(int n){
    // for(int i=n;i>=1;i--){
    //     cout<<i<<endl;
    // }
    int i=n;
    while(i>=1){
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
        printNto1(n);
    }
    return 0;
}