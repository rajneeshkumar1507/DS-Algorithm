#include<bits/stdc++.h>
using namespace std;

int hcfOfTwoNumber(int n, int m){
    int mini = min(n,m);
    int hcf = -1;
    for(int i = 1; i * i <= mini; i++){
        if(mini % i == 0){
            hcf = i;
        }
    }
    return hcf;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int ans = hcfOfTwoNumber(n, m);
        cout<<"HCF of "<<n<<" and "<<m<<" is: "<<ans<<endl;
    }
    return 0;
}