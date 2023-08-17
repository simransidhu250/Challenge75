#include <iostream>
using namespace std;

int main(){
    // int n;
    
    // for(int i=2; i<n; i++){
    //     if(n%i==0){
    //         cout<<"The number is not prime"; 
    //     }
    // }
    int j, start, end,k;
    cin>>start>>end;
    for(j=start; j<=end; j++){
        for(k=2; k<j; k++){
            if(j%k==0){
                break;
            }
        }
        if(k==j){
            cout<<j<<"\t";
        }
    }
    return 0;
}