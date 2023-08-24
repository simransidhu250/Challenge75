#include <iostream>
using namespace std;

bool pythagoras(int a, int b, int c){
    if(a*a==(b*b)+(c*c)){
        return true;
    }
    return false;
}

int main(){
    int a= 3, b= 6, c=5;
    char max =0;
    if(a>b){
        if(a>c){
            max=a;
            a=c;
        }
        else{
            max=c;
        }
    }
    else{
        if(b>c){
            max =b;
            b=c;
        }
        else{
            max =c;
        }
    }  
    if(pythagoras(max,a,b)){
        cout<<"The numbers are pythagoras triplet"<<endl;
    }
    else{
        cout<<"The numbers are not pythagoras triplet"<<endl;
    }

    return 0; 
}