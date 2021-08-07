//Problem-16
//Star Bar Pattern
#include <iostream>
using namespace std;
int main() {
    int i,j;
    int num=4;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            
            if(j==i || j==(8-i)){
                if(j==i && j!=4 && i!=4){
                    cout<<"\\";
                }
                else{
                    cout<<"/";
                }
            } 
            else{
                cout<<'*';
            }
        }
        cout<<endl;
    }
}
