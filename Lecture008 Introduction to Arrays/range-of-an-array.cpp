#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxi = arr[0];
    int mini = arr[0];

    for(int i = 0;i < n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    cout<<"Range of an array is: "<<(maxi-mini)<<endl;
    return 0;
}