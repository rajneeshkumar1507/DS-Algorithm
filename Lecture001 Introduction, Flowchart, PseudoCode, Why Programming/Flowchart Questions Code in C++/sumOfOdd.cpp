#include<bits/stdc++.h>
using namespace std;

int sumOfOddNum(int num){
    int sum = 0;
    for(int i=1;i<=num;i++){
        if(i % 2 !=0){
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int testCases;
    cin>>testCases;
    for(int i=0;i<testCases;i++){
        int num;
        cin>>num;
        int answer = sumOfOddNum(num);
        cout<<"Sum of all odd number 1 to N is: "<<answer<<endl;
    }
    return 0;
}
