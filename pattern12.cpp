#include <iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>=1; j--){
            cout<<"  ";
        }
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        for(int j=2; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j=n-i; j>=1; j--){
            cout<<"  ";
        }
        cout<<endl;

    }
    return 0;
}