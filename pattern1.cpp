#include <iostream>
using namespace std;

int main(){
    int rows=5;
    int col=4;  
    for(int i=1;i<=rows; i++){
        for(int j=1; j<=col; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}