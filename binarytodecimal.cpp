#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Binary to Decimal number logic
    // 111  to 7
    int n = 111;
    int digit, res, i, base, divider;
    res = digit = i =0;
    base = 2;
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