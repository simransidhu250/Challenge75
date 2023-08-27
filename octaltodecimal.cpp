#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Octal to decimal logic
    // (137) to base 8 = (95) to base 10
    int n = 137;
    int digit, res, i, base, divider;
    res = digit = i =0;
    base = 8;
    divider =10;

    while(n>0){
        digit = n%10;
        res = digit*pow(base,i)+res;
        n /= divider;  
        i++;
    }
    cout<<res;

    return 0;
}