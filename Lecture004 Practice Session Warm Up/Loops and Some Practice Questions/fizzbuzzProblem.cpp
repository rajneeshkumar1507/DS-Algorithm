#include<bits/stdc++.h>
using namespace std;

void fizzbuzzProblem(int n){
    for(int i=1;i<=n;i++){
        if(i%3==0){
            cout<<"Fizz"<<endl;
        }
        else if(i%5==0){
            cout<<"Buzz"<<endl;
        }
        else if((i%3==0) && (i%5==0)){
            cout<<"FizzBuzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}
int main()
{
        int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        fizzbuzzProblem(n);
    }
    return 0;
}