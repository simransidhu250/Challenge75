#include <iostream>
using namespace std;

int main(){
    int arr[] = {5, 3,  9,  2, 1};
    int n = sizeof(arr)/ sizeof(0);
    int min = 0;
    int temp;
    int i;
    for(i =0; i<n-1; i++){
        min = i;
        for(int j=i+1; j<n ; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        temp  = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        cout<<arr[i]<<"\t";
    }
    cout<<arr[i]<<"\t";
    
    return 0;
}


