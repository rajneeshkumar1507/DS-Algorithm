#include<bits/stdc++.h>
using namespace std;

void printEven(int n){
    //Method 1 using for Loop
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;
    //Method 2 using for Loop
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    //Method 1 using while loop
    int j=2;
    while(j<=n){
        cout<<j<<" ";
        j+=2;
    }
    cout<<endl;
    //Method 2 using while loop
    int k=1;
    while(k<=n){
        if(k%2==0){
            cout<<k<<" ";
        }
        k++;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printEven(n);
    }
    return 0;
}