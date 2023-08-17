#include <iostream>
using namespace std;


int main(){
    float num1, num2;
    char op;

    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    cout<<"Enter the operation to be performed on the above numbers"<<endl;
    cin>>op;

    switch(op){
        case '+':
            cout<<num1+num2;
            break;

        case '-':
            cout<<num1-num2;
            break;

        case '*':
            cout<<num1*num2;
            break;

        case '/':
            cout<<num1/num2;
            break;

        default:                                    //Anything apart from the above operations is invalid as our calculator but more functionality can be added to this calculator
            cout<<endl<<"Invalid operation"<<endl; 
    }

    return 0;
}