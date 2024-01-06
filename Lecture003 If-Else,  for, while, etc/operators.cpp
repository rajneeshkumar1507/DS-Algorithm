#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Arithmetic Operators: Used to perform mathematical operations on operands.
    // +,-,*,/,%
    int a = 20, b = 15;
    cout<<"Arithmetic Operators"<<endl<<endl;
    cout<<"Addition of "<<a<<" and "<<b<<" is: "<<(a+b)<<endl;
    cout<<"Subtraction of "<<a<<" and "<<b<<" is: "<<(a-b)<<endl;
    cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<(a*b)<<endl;
    cout<<"Division between "<<a<<" and "<<b<<" is: "<<(a/b)<<endl;
    cout<<"Modulus of "<<a<<" and "<<b<<" is: "<<(a%b)<<endl;


    cout<<endl;
    cout<<endl;

    // Relational Operators: Used to compare two operands based on some comparison.
    // <, >, >=, <=, ==, !=
    //It will return either True or False when the condition satisfied

    bool var1 = (a<b);
    bool var2 = (a>b);
    bool var3 = (a>=b);
    bool var4 = (a<=b);
    bool var5 = (a==b);
    bool var6 = (a!=b);


    cout<<"Relational Operators"<<endl<<endl;
    cout<<"Check if "<<a<<" < "<<b<<" : "<<var1<<endl;
    cout<<"Check if "<<a<<" > "<<b<<" : "<<var2<<endl;
    cout<<"Check if "<<a<<" >= "<<b<<" : "<<var3<<endl;
    cout<<"Check if "<<a<<" <= "<<b<<" : "<<var4<<endl;
    cout<<"Check if "<<a<<" == "<<b<<" : "<<var5<<endl;
    cout<<"Check if "<<a<<" != "<<b<<" : "<<var6<<endl;

    cout<<endl;
    cout<<endl;

    // Logical Operators: Used to combine or manipulate operands and make decision 
    // based on multiple conditions. And logical operators expects operands to be 
    // boolean values

    // &&  -  Logical AND (Returns true only if all the operands are true or non-zero)
    // ||  -  Logical OR (Returns true only if either of the operands are true or non-zero)
    // !  -  Logical NOT (Return true of the operand is false or zero)
    cout<<"Logical Operators"<<endl<<endl;
    cout<<"a && b is: "<<(a && b)<<endl;
    // both variable contains boolean value! 
    // Here a = 6, which is a non-zero value, so it is considered as "true"
    // Here b = 4, which is a non-zero value, so it is considered as "true"
    // So, (true && true) = true or 1
    cout<<"a || b is: "<<(a || b)<<endl;
        // both variable contains boolean value! 
    // Here a = 6, which is a non-zero value, so it is considered as "true"
    // Here b = 4, which is a non-zero value, so it is considered as "true"
    // So, (true && true) = true or 1
    int x = 1;
    cout<<" !a is: "<<(!x)<<endl;

    cout<<endl<<endl;

    // Assignment Operators: Used to assign value to a variable
    // =, +=, -=, *=, /=
    cout<<"a+=b = "<<(a+=b)<<endl;
    cout<<"a-=b = "<<(a+=b)<<endl;
    cout<<"a*=b = "<<(a+=b)<<endl;
    cout<<"a/=b = "<<(a+=b)<<endl;

    cout<<endl<<endl;

    // Ternary Operator: Alternative of if-else
    // condition ? if : else
    int num1 = 10;
    int num2 = 7;
    string result1 = (num1 % 2 == 0) ? "Even" : "Odd";
    string result2 = (num2 % 2 == 0) ? "Even" : "Odd";
    cout << "The number is " << result1<< endl;
    cout << "The number is " << result2<< endl;
    return 0;
}