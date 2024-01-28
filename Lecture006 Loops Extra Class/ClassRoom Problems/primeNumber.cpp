#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n){
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if((n%i) != i) cnt++;
        }
    }
   if(cnt == 2) cout<<"Prime Number"<<endl;
   else cout<<"Not a Prime Number"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        checkPrime(n);
    }
    return 0;
}