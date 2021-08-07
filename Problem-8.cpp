//Problem-8
//Number Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    int cnt=1;
    for(i=1;i<=n;i++){
        cnt=1;
        for(j=1;j<(2*n);j++){
            if(j>=(n-i+1) && j<=(n+i-1)){
                if(j>=n){
                    cout<<cnt;
                    cnt--;
                }
                else{
                    cout<<cnt;
                    cnt++;
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
