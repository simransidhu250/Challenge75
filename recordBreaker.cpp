#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 7, 2, 5, 9, 2, 18};
    int max = INT_MIN;
    int rb = 0;
    int n =sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        if(max<arr[i]){
            if((arr[i]>arr[i+1])||(i==(n-1))){
                rb++;
            }
            else{
                continue;
            }
        }
    }
    cout<<rb;
    return 0;
}