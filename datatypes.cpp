#include <iostream>   //preprocessor directive used to include files and iostream is a header file for taking input and printing output
using namespace std;

int main(){
    int a =0;
    cout<<"Size of the int: "<< sizeof(a)<<endl; // Size of integer
    char b;
    cout<<"Size of char: "<< sizeof(b)<<endl; // Size of character
    float c;
    cout<<"Size of float: "<<sizeof(c)<<endl; // Size of float
    double d;
    cout<<"Size of double: "<<sizeof(d)<<endl; //Size of double

    short int si;
    long int li;

    cout<<"Size of shortint: "<<sizeof(si)<<endl; //Size of short integer
    cout<<"Size of long int: "<<sizeof(li)<<endl; // Size of long integer


    return 0;
}