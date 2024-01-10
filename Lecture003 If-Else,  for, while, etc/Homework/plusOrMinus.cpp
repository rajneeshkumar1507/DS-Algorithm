#include<bits/stdc++.h>
using namespace std;

void plusOrMinus(int a, int b, int c){
    if(a+b==c){
        cout<<"+"<<endl;
    }
    else{
        cout<<"-"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a, b, c;
        cin>>a>>b>>c;
        plusOrMinus(a,b,c);
    }
    return 0;
}