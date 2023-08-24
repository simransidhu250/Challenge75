#include <iostream>
using namespace std;

int sum(int n){
    int sum;
    for(int i=1;  i<=n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n = 4;
    cout<<sum(n);
    return 0;
}