//Problem-22
//Star Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    int cnt;
    char ch;
    for(i=1;i<=n;i++){
        cnt=1;
        ch='A';
        for(j=1;j<=(2*n);j++){
            if(j>=(n-i+1) && j<=(n+i-1)){
                if(i==1){
                    cout<<cnt;
                }
                else if(j<=n){
                    cout<<cnt;
                    cnt++;
                }
                else if(j>n){
                    cout<<ch;
                    ch++;
                }
            }
            else{
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
Input-4
Output-
   1    
  12A   
 123AB  
1234ABC 
*/