#include <iostream>
#include <cmath>
// #include <string>

using namespace std;

int main(){
    // Hexadecimal to Decimal number logic
    // ICF to base 16 = 144 to base 8 

    string n = "ICF";
    int len = n.length()-1;
    int res, power = 0;

    for(int i= len; i>=0; i--){
        if(('0'<=n[i]) && (n[i] <='9')){
                res = pow(n[i], power) -'0'+ res;   
        }
        else if (('A'<=n[i])&&('F'<=n[i])){

        }
        power++;
    }
    return 0;
}