#include <iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

int main(){
    int a=4, b=8;
    int sum= add(a,b);
    cout<<sum;
    return 0;
}