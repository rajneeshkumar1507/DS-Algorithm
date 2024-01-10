#include<bits/stdc++.h>
using namespace std;

void pattern14(int n){
    for(int i=1;i<=n;i++){
        for(char ch = 'A';ch<='A'+i-1;ch++){
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
        pattern14(n);
    }
    return 0;
}