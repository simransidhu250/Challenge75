#include <iostream>
using namespace std;

int main(){
    int n=3;
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>=1; j--){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}