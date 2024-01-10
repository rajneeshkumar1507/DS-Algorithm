#include<bits/stdc++.h>
using namespace std;

/*
    1. Functions are set of code which perform something for you.
    2. Funtions are used to modularise code
    3. Functions are used to increase readability
    4. Functions are used to use same code multiple time.

    Types of functions
    1. Parameterized function: Carry parameter inside
    2. Non-Parameterized function: Not carry any parameter inside
    void -> which does not return anything
*/

/*
    Non- Parameterized Function
*/
void func(){ //function definition  
    cout<<"Rajneesh Kumar"; // function body
}

/*
    Parameterized Function
*/
int sum(int num1, int num2){
    return num1 + num2;
}
int main()
{

    // Take two numbers and print it sum
    int num1, num2;
    cin>>num1>>num2;
    int answer = sum(num1, num2);
    cout<<answer;
    // func();
    return 0;
}