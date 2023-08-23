#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n= 153, o = 153;  //(1)^3 + (5)^3 + (3)^3
    int r, sum =0;
    while(n>0){
        r = n%10;
        n = n/10;
        sum +=pow(r,3);
    }
    if (sum == o){
        cout<<o<<" is an armstrong number"<<endl;
    }
    else{
        cout<<o<<" is not an armstrong number"<<endl;
    }
    return 0;
}