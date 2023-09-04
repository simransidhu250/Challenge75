#include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 3,  9,  2, 1};
    int n = sizeof(arr)/ sizeof(0);
    int temp;
    int i;
    for(i =0; i<n-1; i++){
        for(int j=i+1; j<n ; j++){
            if(arr[i]>arr[j]){
                temp  = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

        cout<<arr[i]<<"\t";
    }
    cout<<arr[i]<<"\t";
    
    return 0;
}


