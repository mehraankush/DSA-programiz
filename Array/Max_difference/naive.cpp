#include <iostream>
using namespace std;
// Time : theta(n^2)

int maxDifference(int arr[],int n){
    int res = arr[1]-arr[0];

    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        res = max(res,arr[j]-arr[i]);
       }
    }
    return res;
}

int main(){
    int arr[]={3,4,5,8,7,5,9};
    int size=sizeof(arr)/sizeof(arr[0]);

     cout<<maxDifference(arr,size)<<endl;
    return 0;
}