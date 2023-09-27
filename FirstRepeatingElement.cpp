#include <iostream>
using namespace std;

int main(){
    int arr[]={1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    const int N = 9;
    int res=0;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i]= -1;
    }
    for(int j=0; j<n; j++){
        if(idx[arr[j]]!=-1){
            for(int i=0; i<6; i++){
                cout<<idx[i]<<"\t";
            }
            cout<<endl;
            res = idx[arr[j]];
            break;
        }
        else{
            idx[arr[j]]=j;
            }
    }
    cout<<res;
    return 0;
}