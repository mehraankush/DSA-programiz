#include <iostream>
using namespace std;

// time : O(n^2)
int longestSubarray(int arr[], int n){
    int res = 1;
    for(int i=0; i<n;i++){
         int curr = 1;
         for(int j=i+1; j<n;j++){
             if(arr[j]%2==0 && arr[j-1]%2 != 0 ||arr[j]%2 !=0 && arr[j-1]%2 ==0){
                  curr++;
             }
             else{
                break;
             }
        }
        res = max(res,curr);
       }
      return res;
}

int main(){
    int arr[] = {10,12,14,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<longestSubarray(arr,size);

    return 0;
}