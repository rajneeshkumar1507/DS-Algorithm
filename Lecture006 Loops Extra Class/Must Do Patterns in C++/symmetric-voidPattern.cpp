#include<bits/stdc++.h>
using namespace std;

void pattern19(int n){
    // initial space
    int InSp = 0;
    
    for(int i = 0; i < n; i++){
        // stars
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }

        //spaces
        for(int space = 0; space < InSp; space++){
            cout << " ";
        }

        // stars
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }

        InSp += 2;
        cout << endl;
    }

    // reset initial space for the lower half
    InSp = 2 * (n - 1);

    for(int i = 0; i < n; i++){
        // stars
        for(int j = 1; j <= i + 1; j++){
            cout << "*";
        }

        // spaces
        for(int space = 0; space < InSp; space++){
            cout << " ";
        }

        // stars
        for(int j = 1; j <= i + 1; j++){
            cout << "*";
        }

        InSp -= 2;
        cout << endl;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern19(n);
    }
    return 0;
}