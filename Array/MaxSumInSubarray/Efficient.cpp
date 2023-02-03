#include <iostream>
using namespace std;
// Kadones Algorithms
//Time O(n)
// add the last max subarray result to the current element and check which one is max 
// res = max(maxEnding,res);
int maxSumSubarray(int arr[],int n){
    int res=arr[0];
    int maxEnding=arr[0];
    for(int i=1;i<n;i++){
        maxEnding = max(maxEnding+arr[i],arr[i]);
        res = max(maxEnding,res);
    }
    return res;
}

int main(){
    int arr[]={15,3,-8,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSumSubarray(arr,size);

   return 0;
}