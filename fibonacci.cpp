#include <iostream>
using namespace std;

int fibonacci(int n){
    int sum=0;
    int a=0, b=1;
    cout<<a<<"\t"<<b<<"\t";
    for(int i=3; i<=n; i++ ){
        sum = a+b; 
        a=b;
        b=sum;
        cout<<sum<<"\t";
    }
    return sum;
}

int main(){
    fibonacci(5);
    return 0;
}