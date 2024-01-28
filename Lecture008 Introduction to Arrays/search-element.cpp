#include<bits/stdc++.h>
using namespace std;

bool presentOrNot(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}
void presentOrNot1(int arr[], int n, int target){
    int isPresent = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            isPresent = 1;
            break;
        }
    }
    cout << ((isPresent == 1) ? "Present" : "Not Present") << endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        presentOrNot1(arr, n, num);
    }
    return 0;
}