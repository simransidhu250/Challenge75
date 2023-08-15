#include <iostream>
using namespace std;

int main(){
    int pocketMoney = 1500;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;   //Skip to the next iteration of the loop
        }
        if(pocketMoney ==0){
            break;  // Terminate the loop
        }
        cout<<date<<endl;
        cout<<"Go out today!"<<endl;
        pocketMoney = pocketMoney-300;
    }
    cout<<"Something written outside of loop still gets printed";
    return 0;
}