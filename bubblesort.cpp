#include <iostream>
using namespace std;

int main(){
    int arr [] = {5, 3, 9, 2, 1, 8, 7, 41};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int temp = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
     return 0;
}