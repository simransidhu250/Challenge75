#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number to find its even or odd: ";
    cin>>n;
    if(n%2==0){
        cout<<"Number is even\n";
    }
    else{
        cout<<"Number is odd\n";
    }
    return 0;
}