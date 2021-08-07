//Problem-2
//star printing problem
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<(n-i-1)){
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
