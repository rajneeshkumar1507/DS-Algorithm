#include<bits/stdc++.h>
using namespace std;

void printTable(int n){
    for(int i=1;i<=10;i++){
        cout<<(n*i)<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printTable(n);
    }
    return 0;
}