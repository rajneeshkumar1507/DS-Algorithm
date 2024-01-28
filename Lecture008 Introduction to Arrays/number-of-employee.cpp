#include<bits/stdc++.h>
using namespace std;

int numberOfEmployeesWhoMetTarget(int n, int hours[], int target) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (hours[i] >= target) {
                count++;
            }
        }
        return (count > 0) ? count : 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int hours[n];
        for(int i=0;i<n;i++){
            cin>>hours[i];
        }
        int target;
        cin>>target;
        int ans = numberOfEmployeesWhoMetTarget(n, hours, target);
        cout<<ans<<endl;
    }
    return 0;
}