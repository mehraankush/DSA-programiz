#include <iostream> 
using namespace std;

//time O(n^2)
// subarray {1,2,3} ==> {1},{2},{3},{1,2},{2,3},{1,2,3} every element should be in contigious order
int maxSum(int arr[],int n){
    int res = arr[0];
    for(int i = 0; i < n;i++){
        int curr=0;
        for(int j = i; j < n;j++){
            curr = curr + arr[j];
            res= max(res,curr);
        }
    }
    return res;
}


int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr,size);

   return 0;
}