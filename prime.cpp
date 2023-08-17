#include <iostream>
using namespace std;

int main(){
    // int n;
                                                        //Logic for prime numbers that they will be divisible by 1 and number itself only
                                                        // so we execute loop from 2 till number-1
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