#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=100;i++){
        if(i%3==0){
            continue; // skips the numbers divisble by 3
        }
        cout<<i<<endl;
    }
    return 0;
}