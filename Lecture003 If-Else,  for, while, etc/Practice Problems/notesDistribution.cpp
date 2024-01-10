#include<bits/stdc++.h>
using namespace std;

void notesDistribution(int amount){
    int oneRupee, twoRupee, fiveRupee, tenRupee, twentyRupee, fiftyRupee, hundredRupee, fiveHundredRupee;
        oneRupee=twoRupee=fiveRupee=tenRupee=twentyRupee=fiftyRupee=hundredRupee=fiveHundredRupee=0;
        if(amount>=500){
            fiveHundredRupee=amount/500;
            amount-=fiveHundredRupee*500;
        }
        if(amount >= 100)
			hundredRupee = amount/100;
			amount -= hundredRupee * 100;
		if(amount >= 50)
			fiftyRupee = amount/50;
			amount -= fiftyRupee * 50;
		if(amount >= 20)
			twentyRupee = amount/20;
			amount -= twentyRupee * 20;
		if(amount >= 10)
			tenRupee = amount/10;
			amount -= tenRupee * 10;
		if(amount >= 5)
			fiveRupee = amount/5;
			amount -= fiveRupee * 5;
		if(amount >= 2)
			twoRupee = amount /2;
			amount -= twoRupee * 2;
		if(amount >= 1)
			oneRupee = amount;

        cout<<"Total number of different notes"<<endl;
        cout<<"500: "<<fiveHundredRupee<<endl;
        cout<<"100: "<<hundredRupee<<endl;
        cout<<"50: "<<fiftyRupee<<endl;
        cout<<"20: "<<twentyRupee<<endl;
        cout<<"10: "<<tenRupee<<endl;
        cout<<"5: "<<fiveRupee<<endl;
        cout<<"2: "<<twoRupee<<endl;
        cout<<"1: "<<oneRupee<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int amount;
        cin>>amount;
        notesDistribution(amount);
    }
    return 0;
}