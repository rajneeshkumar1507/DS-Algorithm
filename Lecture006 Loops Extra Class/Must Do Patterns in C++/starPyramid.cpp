#include<bits/stdc++.h>
using namespace std;
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int space=0;space<n-i-1;space++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        // This loop is not neccessary.
        for(int space=0;space<n-i-1;space++){
            cout<<" ";
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
        pattern7(n);
    }
    return 0;
}