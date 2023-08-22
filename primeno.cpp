#include <iostream>
using namespace std;

bool prime(int a, int b){
    bool flag=true;
    for(int i =a; i<=b;i++){
        for(int j=2; j<i; j++){
            if(i%j ==0){
                flag = 0;
            }
        }
    }
}

int main(){
    int a, b;
    prime(a,b);
    return 0;
}