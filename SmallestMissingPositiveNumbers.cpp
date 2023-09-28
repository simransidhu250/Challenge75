#include <iostream>
using namespace std;

int main(){
    int arr[] ={1,6,3,8,4};
    const int N = 9;
    int check[N];
    int ans = -1;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<N; i++){
        check[i] = 0;
    }
    for(int i=0; i<n; i++){
        check[arr[i]] = 1;
    }
    for(int i=1; i<N; i++){
        if(check[i]==0){
            ans= i;
            break;
        }
    }
    cout<<ans;
    return 0;
}