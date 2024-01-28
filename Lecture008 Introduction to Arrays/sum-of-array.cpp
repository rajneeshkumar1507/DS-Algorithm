#include<bits/stdc++.h>
using namespace std;

int func(int arr[], int sum, int n){
    if(n <= 0) return sum;
    return func(arr, sum + arr[n - 1], n - 1);
}
int sum(int arr[], int n){
    return func(arr, 0, n);
}
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = sum(arr, n);
        cout << ans << endl;
    }
    return 0;
}
