#include<bits/stdc++.h>
using namespace std;

int main()
{

    /*Ques-1.Write a program that takes an input of age
    and prints if you are adult or not
    >=18  adult
    <18   not an adult

    int age;
    cin>>age;
    edge case
    if(age<1){
        cout<<"Enter the Valid Age !";
    }
    if(age>=18){
        cout<<"Adult";
    }
    else if(age<18){
        cout<<"Not an adult";
    }
    */


    /*Ques.2 
    A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 80 - A
    Ask user to enter marks and print the corresponding grade.

    int marks;
     cin>>marks;
     if(marks < 25){
         cout<<"F";
     }
     else if(marks<=44){
         cout<<"E";
     }
     else if(marks<=49){
         cout<<"D";
     }
     else if(marks<=59){
         cout<<"C";
     }
     else if(marks<=79){
         cout<<"B";
     }
     else if(marks<=100){
         cout<<"A";
     }

    */

    /*Take the age from the user and then decide accordingly
    1. if age < 18,
        print->not eligible for job
    2. if age>=18 and age <=54,
        print-> eligible for job
    3. if age >= 55 and age <=57,
        print-> Eligible for job, but Retirement soon
    4. if age > 57
        print-> Retirement Time*/

    int age;
    cin>>age;
    if(age<18){
        cout<<"Not eligible for job";
    }
    else if(age<=54){
        cout<<"Eligible for job";
    }
    else if(age<=57){
        cout << "Eligible for job, but Retirement soon";
    }
    else{
        cout<<"Retirement Time";
    }
    return 0;
}