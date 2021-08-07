//Problem-19
//Star Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    char ch='A';
    for(i=1;i<=n;i++){
        ch='A';
        for(j=1;j<(2*n);j++){
            if(j>=(n-i+1) && j<=(n+i-1)){
                if(j<n){
                    cout<<ch;
                    ch++;
                }
                else if(j==n){
                    cout<<ch;
                    ch--;
                }
                else{
                    cout<<ch;
                    ch--;
                }
            }
            else{
                cout<<' ';
            }
        }
        cout<<endl;
    }
}
/*
Input-4
Output-
   A   
  ABA  
 ABCBA 
ABCDCBA
*/