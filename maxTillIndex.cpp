#include <iostream>
using namespace std;

int main(){
    int arr[] = {4,8,9,7,2,1,65,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;

    // Finding max til a particular index
    // Compare with the current element and check if the maximum is less than the current number 

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        cout<<max<<endl;
    }

    return 0;
}