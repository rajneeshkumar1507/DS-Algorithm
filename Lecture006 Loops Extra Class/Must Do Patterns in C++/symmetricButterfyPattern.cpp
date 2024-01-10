#include<bits/stdc++.h>
using namespace std;

void pattern20(int n){
    //initial space
    int iniS=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        //stars
        int stars = i;
        if(i>n) stars = 2 * n - i;
        for(int j = 1; j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int space=1;space<=iniS;space++){
            cout<<" ";
        }
         for(int j = 1; j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) iniS-=2;
        else iniS+=2;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern20(n);
    }
    return 0;
}