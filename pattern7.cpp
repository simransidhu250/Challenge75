#include <iostream>
using namespace std;

int main(){
    int n =4;
    for(int i=n;i>=1;i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        int space = (2*n-2*i);

        for(int j=1; j<=space; j++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
                    cout<<"*";
                }
        

        // for(int j=1; j<=2*n; j++){
        //     if((j<=i)||(j>(2*n-i))){
        //         cout<<"*\t";
        //     }
        //     else{
        //         cout<<" \t";
        //     }
        // }
        //         for(int j=1; j<=2*n; j++){
        //     if((j<=i)||(j>(2*n-i))){
        //         cout<<"*\t";
        //     }
        //     else{
        //         cout<<" \t";
        //     }
        // }

        cout<<endl;
    }
    return 0;
}
   