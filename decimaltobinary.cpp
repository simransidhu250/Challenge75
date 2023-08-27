#include <iostream>
using namespace std;

int main(){
    //Decimal to Binary function logic

    int n =5;
    int digit =0;
    int res =0;
    int x = 1;
    while(n>0){
        digit = n%2;
        n = n/2;
        res = res*10 + digit;
    }
    cout<<res;
    return 0;
}