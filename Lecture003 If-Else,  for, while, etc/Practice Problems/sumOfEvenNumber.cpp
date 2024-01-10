#include<bits/stdc++.h>
using namespace std;

int sumOfEvenNumber(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0)
            sum+=i;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int answer = sumOfEvenNumber(n);
        cout<<"Sum of Even Numbers from 1 to N is: "<<answer<<endl;
    }
    return 0;
}