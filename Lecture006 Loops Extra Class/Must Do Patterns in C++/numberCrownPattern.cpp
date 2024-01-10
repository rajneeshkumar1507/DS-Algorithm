#include <bits/stdc++.h>
using namespace std;

void pattern12(int N)
{
      int spaces = 2*(N-1);      
      for(int i=1;i<=N;i++){
        //Numbers
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          
          // Spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          //Numbers
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          cout<<endl;
          spaces-=2;
      }
}
int main()
{   
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern12(n);
    }
    return 0;
}