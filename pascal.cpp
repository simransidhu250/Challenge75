#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;

}

int main(){
    int n=5, com=1, j;
    for(int i=0; i<n; i++){
        for(j=0; j<i; j++){
            com =  factorial(i)/(factorial(i-j)*factorial(j));
            cout<<com<<"\t";
        }
        cout<<endl;
    }
    return 0;
}