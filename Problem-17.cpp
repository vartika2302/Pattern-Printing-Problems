//Problem-17
//Star Pattern
#include <iostream>
using namespace std;
int main() {
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(i<=5 && j<=(6-i) || j>=(4+i)){
                cout<<'*';
            }
            else if(j<=(abs(5-i)+1) || j>(8-abs(5-i))){
                cout<<'*';
            }
            else{
                cout<<' ';
            }           
        }
        cout<<endl;
    }
    
     
    
    
}
