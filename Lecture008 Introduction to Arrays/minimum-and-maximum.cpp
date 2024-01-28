#include<bits/stdc++.h>
using namespace std;

long long smallestElement(long long arr[], int n){
    int mini = arr[LLONG_MAX];
    for(int i=1;i<n;i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}
long long largestElement1(long long arr[], int n){
    int maxi = arr[LLONG_MIN];
    for(int i=1;i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}
pair<long long, long long> getMinMax(long long a[], int n) {
    long long smallest = smallestElement(a, n);
    long long largest = largestElement1(a, n);
    pair<long long, long long> result = {smallest, largest};
    return result;
}
int main()
{
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        pair<long long, long long> ans = getMinMax(arr, n);
        cout << "Smallest: " << ans.first << " Largest: " << ans.second << endl;
    }
    return 0;
}