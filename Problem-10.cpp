//Problem-10
//Star Pattern (Diamond)
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    if(n%2!=0){
        int num=(n+1)/2;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i<=(num)){
                    if(j>=(num-i+1) && j<=(num+i-1)){
                        cout<<'*';
                    }
                    else{
                        cout<<' ';
                    }
                }
                else{
                    if(j>=(num-(n-i+1)+1) && j<=(num+(n-i+1)-1)){
                        cout<<'*';
                    }
                    else{
                        cout<<' ';
                    }
                }
            }
            cout<<endl;
        }
    }
    else{
        int num=n/2;
        for(i=1;i<=n;i++){
            for(j=1;j<n;j++){
                if(i<=(num)){
                    if(j>=(num-i+1) && j<=(num+i-1)){
                        cout<<'*';
                    }
                    else{
                        cout<<' ';
                    }
                }
                else{
                    if(j>=(num-(n-i+1)+1) && j<=(num+(n-i+1)-1)){
                        cout<<'*';
                    }
                    else{
                        cout<<' ';
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
