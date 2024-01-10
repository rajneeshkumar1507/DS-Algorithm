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
void print1ToN(int n){
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
}
void printNto1(int n){
    // for(int i=n;i>=1;i--){
    //     cout<<i<<endl;
    // }
    int i=n;
    while(i>=1){
        cout<<i<<" ";
        i--;
    }
}
void printEvenDivisibleBy7(int n){
    for(int i=14;i<=n;i+=7){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
}
void printTable(int n){
    for(int i=1;i<=10;i++){
        cout<<(n*i)<<" ";
    }
}
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
void problemOnBreakKeyword(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if((i%2==0) && (i%7==0)){
            cout<<i<<" ";
            sum+=i;
        }
        if(sum>100){
            cout<<endl<<"Sum is: "<<sum;
            break;
        }
    }
}
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
void continueKeyword(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        else{
            cout<<i<<" ";
        }
    }
}
int countDigits(int n){
    //edge case
    if(n==0){
        return n;
    }
    int digitCount = 0;
    for(int i=n;i>0;i/=10){
        digitCount++;
    }
    return digitCount;
}
int sumOfDigits(int n){
    // Edge case
    if(n==0){
        return n;
    }
    int digit_sum=0;
    for(int i=n;i>0;i/=10){
        digit_sum+=i%10;
    }
    return digit_sum;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        // continueKeyword(n);
        int answer = sumOfDigits(n);
        cout<<"The sum of digits of a number is: "<<answer<<endl;
    } 
    return 0;
}