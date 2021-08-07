//Problem-7
//Star Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    for(int i=1;i<=n;i++){
        for(int j=1;j<(2*n);j++){
            if(j>(n-i+1) && j<(n+i-1)){
                cout<<' ';
            }
            else{
                cout<<'*';
            }
        }
        cout<<endl;
    }
    return 0;
}
