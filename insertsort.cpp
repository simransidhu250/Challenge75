#include <iostream>
using namespace std;

int main(){
    int arr[] = {12,45,23,51,19,8};
    int n = sizeof(arr)/sizeof(arr[0]);  
    int j, temp;


    // Insertion sort involves comparison of next element with current element 
    // and if the next element is smaller then the comparison takes place 
    // with all the previous elements that are greater than that element that is next to current element
    // Time complexity of the Insertion Sort is O(n^2) for average case and O(n) for the best case
    // Space complexity of the insertion sort is constant O(1)

    for(int i=0; i<n-1; i++){
            j = i;
            if(arr[j+1]<arr[j]){
                while((arr[j+1]<arr[j])&&(arr[j>=0])){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    j--;
                }
            }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}