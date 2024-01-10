#include<bits/stdc++.h>
using namespace std;

// Leetcode 263. Ugly Number
bool isUgly(int n) {
    if(n<=0) return false;
    if(n==1) return true;
    while(n>1){
            if(n%2==0) n/=2;
            else if(n%3==0) n/=3;
            else if(n%5==0) n/=5;
            else{
                return false;
                break;
            }
        }
        return true;
    }
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(isUgly(n)){
            cout<<"True"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
    }
    return 0;
}