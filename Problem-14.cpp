//Problem-14
//Star Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    int num=(n+1);
    int cnt;
    for(i=1;i<=num;i++){
        cnt=num-i;
        for(j=1;j<=num;j++){
            if(cnt<0){
                break;
            }
            else{
                cout<<cnt<<" ";
                cnt--;
            }
        }
        cout<<endl;
    }
    return 0;
}
