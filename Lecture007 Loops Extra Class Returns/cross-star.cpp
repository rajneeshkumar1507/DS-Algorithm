#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || (i+j==n+1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}