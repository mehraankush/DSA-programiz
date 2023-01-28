#include <iostream>
using namespace std;
// time : theta(n)

int maxDifference(int arr[],int n){
    int res = arr[1]-arr[0];
    int minVal=arr[0];

    for(int i=1;i<n;i++){
       res = max(res,arr[i]-minVal);
       minVal = min(minVal,arr[i]);
    }
    return res;
}

int main(){
    int arr[]={10,4,5,8,7,5,9};
    int size=sizeof(arr)/sizeof(arr[0]);

     cout<<maxDifference(arr,size)<<endl;
    return 0;
}