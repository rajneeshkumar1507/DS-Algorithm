#include<bits/stdc++.h>
using namespace std;

void problem1(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        cout<<"Alpabet"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Digit"<<endl;
    }
    else{
        cout<<"Special Character"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char ch;
        cin>>ch;
        problem1(ch);
    }
    return 0;
}