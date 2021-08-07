//Problem-11
//Star Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    int cnt=0;
    for(i=1;i<=n;i++){
        if(n%2==0){
            if(i<=(n)/2){
                cnt++;
            }
            if(i>((n/2)+1)){
                cnt--;
            }
        }
        else{
            if(i<=((n/2)+1)){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        for(j=1;j<=((n/2)+1);j++){
            if(j<=cnt){
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
