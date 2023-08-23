#include <iostream>
using namespace std;

int main(){
    int n = 4853;
    int r = 0;
    do{
        r = (n%10)+r*10;
        n = n/10;
    }while((n%10)!=0);

    cout<<r<<endl;
        
    return 0;
}