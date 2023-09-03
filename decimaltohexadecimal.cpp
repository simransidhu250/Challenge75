#include <iostream>
using namespace std;

int main(){
    // Decimal to Hexadecimal conversion logic

    int n = 100;
    int power = 1;
    int digit = 0, res = 0; 

    while(power<n){
        power = power*16;
    }
    power /= 16;

    while(n>0){
        digit = n/power;
        n = n%power;
        power /= 16;
        res = res*10 +digit;
    }

    cout<<res;
    return 0;
}