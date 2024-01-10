#include<bits/stdc++.h>
using namespace std;

void fizzbuzzVariation(int n){
    int sum=0;
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
        else if((i%3!=0) && (i%5!=0)){
            cout<<i<<endl;
            sum+=i;
        } 
        else{
            if(i>2*n){
                break;
                }
            }
    }
    cout<<"Sum is: " << sum;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        fizzbuzzVariation(n);
    } 
    return 0;
}