#include<iostream>
using namespace std;
// Find if there is a  sum with given array
//keep adding the array until it is sum>= k 
// if greater substract the first term
bool slide_window(int arr[],int n,int k){
    
     int curr_sum =arr[0];
     int start=0;
    for(int end = 1; end < n;end++){
          
          while(curr_sum > k && start<end-1){
            curr_sum -= arr[start];
            start++;
          }
          if(curr_sum==k){
            return true;
          }
          if(end<n){
            curr_sum += arr[end];
          }
         
    }
    return (curr_sum == k);
}

int main(){
    int arr[] = {1,4,20,3,10,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k =33;
    cout<<slide_window(arr,size,k);

    return 0;
}