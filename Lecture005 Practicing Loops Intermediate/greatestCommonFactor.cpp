#include<bits/stdc++.h>
using namespace std;

int gcd(int A, int B) 
	{ 
	    // code here
	    int rem = 1;
	    int divident, divisor;
	    if(A>B){
	        divident = A;
	        divisor = B;
	    }
	    else{
	        divident = B;
	        divisor = A;
	    }
	    while(rem!=0){
	        rem = divident%divisor;
	        if(rem!=0){
	            divident=divisor;
	            divisor=rem;
	        }
	    }
	    return divisor;
	      
	} 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a, b;
        cin>>a>>b;
        int answer = gcd(a,b);
        cout<<answer<<endl;
    }
    return 0;
}