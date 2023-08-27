#include <iostream>
using namespace std;

int main(){
    string str = "1CF";
    int len = str.length();
    int digit =0, res =0, x=1;
    for(int i=len-1; i>= 0; i--){
        if( ( '0'<=str[i] ) && ('9'>=str[i])){
            digit = str[i] - '0';
            res = res + digit*x;

        }
        else if(('A'<=str[i]) && ('F'>=str[i])){
            digit = str[i] - 'A' + 10;
            res = res +digit*x;
        }
        x = x*16;
    } 
    cout<< res;
    return 0;
}