#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;

}

int main(){
    int n =4;
    int f=factorial(n);
    cout<<f<<endl;
    return 0;
}