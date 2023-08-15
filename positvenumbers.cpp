#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        cout<<n<<endl; //while loops checks conditions then enters the loop 
        cin>>n;        // do while loop runs the loop for first time and then checks the condtion
    }
    return 0;
}