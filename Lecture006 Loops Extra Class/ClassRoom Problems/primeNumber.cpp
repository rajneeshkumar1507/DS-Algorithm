#include<bits/stdc++.h>
using namespace std;

bool primeNumber(int n){
    bool isPrime=1;
    if(n<=1){
        isPrime=0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    return isPrime;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(primeNumber(n)==0){
            cout<<n<<" is not a Prime Number!"<<endl;
    }
    else{
        cout<<n<<" is a Prime Number!"<<endl;
    }
    }
    return 0;
}