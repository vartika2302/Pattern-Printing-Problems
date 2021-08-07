//Problem-6
//Star Problem
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=(2*n);j++){
            if(n%2!=0){
                if(i%2!=0){
                    if(j>=(n-i+1) && j<=(n+i-1)){
                        if(j%2!=0){
                            cout<<'*';
                        }
                        else{
                            cout<<' ';
                        }
                    }
                    else{
                        cout<<' ';
                    }
                }
                else{
                    if(j>=(n-i+1) && j<=(n+i-1)){
                        if(j%2==0){
                            cout<<'*';
                        }
                        else{
                            cout<<' ';
                        }
                    }
                    else{
                        cout<<' ';
                    }
                }
            }
            else{
                if(i%2!=0){
                    if(j>=(n-i+1) && j<=(n+i-1)){
                        if(j%2==0){
                            cout<<'*';
                        }
                        else{
                            cout<<' ';
                        }
                    }
                    else{
                        cout<<' ';
                    }
                }
                else{
                     if(j>=(n-i+1) && j<=(n+i-1)){
                        if(j%2!=0){
                            cout<<'*';
                        }
                        else{
                            cout<<' ';
                        }
                    }
                    else{
                        cout<<' ';
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}