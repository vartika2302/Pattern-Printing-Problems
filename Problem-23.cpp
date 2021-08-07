//Problem-23
//Number Pattern
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i,j;
    int val;
    for(i=1;i<=n;i++){
        val=1;
        for(j=1;j<=n;j++){
            if(j<=i){
                cout<<val;
                val=1-val;
            }
            else{
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}

/*
Input-6
Output-
1     
10    
101   
1010  
10101 
101010
*/