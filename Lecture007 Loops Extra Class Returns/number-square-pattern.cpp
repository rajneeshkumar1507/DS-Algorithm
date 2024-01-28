#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i = 1; i<=n;i++){
        int count = i;
        for(int j = 1; j<=n;j++){
            cout<<count++;
        }
        cout<<endl;
    }
}

/*
    Do not other variable to solve the problem,
    Simple doing, i+j-1 -> Gives you the increasing
    counting
*/
void pattern2(int n){
    for(int i = 1; i<=n;i++){
        // you can  j = i, cause every row starts with i.
        for(int j = 1; j<=n;j++){
            cout<<(i+j-1);
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern1(n);
    cout<<endl;
    pattern2(n);
    return 0;
}