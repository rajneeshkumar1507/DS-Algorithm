#include<bits/stdc++.h>
using namespace std;

bool perfectPower(int num){
    if(num<=0) return false;
    while(num>1){
    if(num % 2 != 0){
        return false;
    }
    num = num / 2;
    }
    return true;
}
int main()
{
    int testCases;
    cin>>testCases;
    for(int i=0;i<testCases;i++){
        int num;
        cin>>num;
        if(perfectPower(num)){
            cout<<num<<" is perfect power of 2!"<<endl;
        }
        else{
            cout<<num<<" is not a perfect power of 2!"<<endl;
        }
    }
    return 0;
}
