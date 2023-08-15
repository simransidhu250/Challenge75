#include <iostream>
using namespace std;

int main(){
    int counter, sum, n;
    n = 8;
    for(int counter =1; counter<=n; counter++){
        sum = sum+counter;
    }
    cout<<"Sum is:"<<sum;
    return 0;
}