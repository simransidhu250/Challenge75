#include <iostream>
using namespace std;

int main(){
    int arr[] ={1,2,3,4,6,8,10,12,14,16,19,22,25,};
    int count=1, difference=0;
    int max = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        if(arr[i+1]-arr[i]== difference){
            count++;
        }
        else{
            difference = arr[i+1] - arr[i];
            if(count>max){
                cout<<count<<endl;
                max = count;
            }
            count = 2;
        }
    }
    cout<<max;
    return 0;
}