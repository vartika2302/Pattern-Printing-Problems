//Problem-18
//Star Problem
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    
    for(i=1;i<=n;i++){
        for(j=1;j<(2*n);j++){
            if(j<i || j>((2*n)-i)){
                cout<<' ';
            }
            else{
                cout<<'*';
            }
        }
        cout<<endl;
    }
}
