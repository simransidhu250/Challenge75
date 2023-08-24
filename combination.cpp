#include <iostream>
using namespace std;

int fact(int n){
    int fact =1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int main(){
    int n=5, r=2;
    int f = fact(n);
    int com = fact(n)/(fact(n-r)*fact(r));
    cout<<com;
    return 0;
}