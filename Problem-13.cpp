//Problem-13
//Star Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    int cnt=0;
    for(i=1;i<=n;i++){
        cnt=i;
        for(j=1;j<(2*n);j++){
            if(j>=(n-i+1) && j<=(n+i-1)){
                if(j<=n){
                cout<<cnt;
                cnt++;
               }
                else{
                    if(j==(n+1)){
                        cnt--;
                    }
                    cnt--;
                    cout<<cnt;
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
