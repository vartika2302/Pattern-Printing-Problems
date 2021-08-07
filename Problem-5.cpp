//Problem-5
//Star Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=(2*n);j++){
            if(j>=(n-i+1) && j<=(n+i-1)){
                cout<<'*';
            }
            else{
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
