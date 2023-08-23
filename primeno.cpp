#include <iostream>
#include <cmath>
using namespace std;

void prime(int a, int b){
    bool flag;
    for(int i=a; i<=b;i++){
        flag=0;
        for(int j=2; j<sqrt(i); j++){ // sqrt improves efficiency
            if(i%j ==0){
                flag = 1;
                break;
            }
        
        }
        if(flag == 0){
            cout<<i<<"\t";
        }
    }
}

int main(){
    int a=2, b=20;
    prime(a,b);
    return 0;
}