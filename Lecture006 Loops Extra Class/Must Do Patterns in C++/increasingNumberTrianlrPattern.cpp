#include<bits/stdc++.h>
using namespace std;

void pattern13(int n){
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<"\n";
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern13(n);
    }
    return 0;
}