#include <iostream>
using namespace std;

int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        //Kadane's Algorithm
        sum = sum + arr[i];
        maxi = max(maxi, sum);
        sum = max(sum, 0);
    }
    cout<<maxi;
    return 0;
}