//Problem-20
//Star Pattern(Char & Number)
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        char ch='A';
        int num=1;
        for(j=1;j<=(2*n);j++){
            if(j>(n-i) && j<=(n+i)){
                if(j<=n){
                    cout<<ch;
                    ch++;
                }
                else{
                    cout<<num;
                    num++;
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
Input-5
Output-   
    A1    
   AB12   
  ABC123  
 ABCD1234 
ABCDE12345
*/