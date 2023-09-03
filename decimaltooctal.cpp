#include <iostream>
using namespace std;

int main(){
    // Decimal to Octal

    //  100 with base 10 = 144 with base 8

    int n = 100;
    int power = 1;
    int digit = 0, res = 0; 
    while(power<n){
        power = power*8;
    }
    power /= 8;
    while(n>0){
        digit = n/power;
        n = n%power;
        power /= 8;
        res = res*10 +digit;
    }
    cout<<res;

    return 0;
}