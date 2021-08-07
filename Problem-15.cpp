//Problem-15
//Star Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    int cnt;
    int num=(n+1)/2;
    if(n%2!=0){
        for(i=1;i<=n;i++){
        cnt=1;
        for(j=1;j<=num;j++){
            if(j<=abs(num-i)){
                cout<<' ';
            }
            else{
                cout<<cnt;
                cnt++;
            }
        }
        cout<<endl;
    }
    }
    else{
        for(i=1;i<=n;i++){
            cnt=1;
            if(i==((n/2)+1)){
                for(j=1;j<=num;j++){
                    cout<<cnt;
                    cnt++;
                }
            }
            else{
                for(j=1;j<=num;j++){
                    if(i<=num){
                        if(j<=(abs(n-num-i))){
                        cout<<' ';
                    }
                    else{
                        cout<<cnt;
                        cnt++;
                    }
                    }else{
                        if(j<=(num-(n-i)-1)){
                            cout<<' ';
                        }
                        else{
                            cout<<cnt;
                            cnt++;
                        }
                    }

                }
            }
            cout<<endl;
        }
    }
    return 0;
}
