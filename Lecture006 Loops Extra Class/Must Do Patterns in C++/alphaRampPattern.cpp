#include<bits/stdc++.h>
using namespace std;

void pattern16(int n){
    for(int i=1;i<=n;i++){
        char ch = 'A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
    }
}
int main()
{
        int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern16(n);
    }
    return 0;
}