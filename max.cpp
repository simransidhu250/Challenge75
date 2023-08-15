#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3, max;
    cout<<"Enter three numbers to find the max: ";
    cin>>num1; 
    cin>>num2;
    cin>>num3;
    if(num1>num2){   // Checking max of firstand second number
        if(num1>num3){
            max = num1;
        }
        else{
            max = num3;
        }
    }
    else{
        if(num2>num3){  // Checking max of second and third number
            max = num2;
        }
        else{
            max = num3;
        }
    }
    cout<<"Max is: "<<max;
    return 0;
}