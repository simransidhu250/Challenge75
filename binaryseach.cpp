#include <iostream>
using namespace std;

int binary(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid;

    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key<mid){
            end = mid;
        }
        else{
            start = mid;
        }
    }
    return mid;
}

int main(){
    int arr[] = {12,19,30,42,45,51};
    int key = 45;
    int len =  sizeof(arr)/sizeof(arr[0]);
    int res = binary(arr, len, key);
    cout<"Postition of the key is "<<res;
}