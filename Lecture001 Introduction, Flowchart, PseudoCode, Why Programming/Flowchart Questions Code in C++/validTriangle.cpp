#include<bits/stdc++.h>
using namespace std;
bool validTriangle(int side1, int side2, int side3){
    return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1) && (side1 != 0) && (side2 != 0) && (side3 != 0);
}
int main()
{
    int testCases;
    cin>>testCases;
    //edge case
    for(int i=0;i<testCases;i++){
        int side1, side2, side3;
        cin>>side1>>side2>>side3;
        if(validTriangle(side1, side2, side3)){
            cout<<"Valid Triangle"<<endl;
        }
        else{
            cout<<"Not a valid triangle"<<endl;
        }
    }
    return 0;
}