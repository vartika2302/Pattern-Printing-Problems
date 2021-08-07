//Problem-9
//Character Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    char ch='A';
    int f=1;
    for(i=1;i<=n;i++){
        ch='A';
        for(j=1;j<(2*n);j++){
            if(j>(n-i+1) && j<(n+i-1)){
                cout<<' ';
            }
            else{
                if(j<=n){
                    cout<<ch;
                    ch++;
                }
                else{
                    if(i==1 && f==1){
                        ch--;
                        f=0;
                    }
                    ch--;
                    cout<<ch;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
