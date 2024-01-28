#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n){
    if(n<=0) return false;
    while(n>1){
        if(n%2 != 0){
            return false;
        }
        n/=2;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool answer = isPowerOfTwo(n);
        cout<<answer<<endl;
    }
    return 0;
}