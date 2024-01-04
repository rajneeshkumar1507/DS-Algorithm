#include <bits/stdc++.h>
using namespace std;

int maxOfThreeNumber(int num1, int num2, int num3){
    if((num1 > num2)&&(num1 > num3)){
        return num1;
    }
    else if((num2 > num1)&&(num2 > num3)){
        return num2;
    }
    else{
        return num3;
    }
}
int main()
{
    int testCases;
    cin>>testCases;
    for(int i=0;i<testCases;i++){
        int num1, num2, num3;
        cin>>num1>>num2>>num3;
        int answer = maxOfThreeNumber(num1, num2, num3);
        cout<<"Maximum number is: "<<answer<<endl;
    }
	return 0;
}

