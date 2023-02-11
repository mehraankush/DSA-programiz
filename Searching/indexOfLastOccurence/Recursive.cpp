#include <iostream>
using namespace std;

// Time O(logn)
// space O(logn)

int lastOcc(int arr[],int low,int high,int x,int n){
    
    if(low>high){ return -1;}

    int mid=(low+high)/2;
    if(x<arr[mid]){
      return lastOcc(arr,low,mid-1,x,n);}

    else if(x > arr[mid]){
      return lastOcc(arr,mid+1,high,x,n);}

    else{
        if(mid == n-1 || arr[mid]!= arr[mid+1]){
            return mid;
        }else{
            return lastOcc(arr,mid+1,high,x,n);
        }
    }
}

int main(){
    int arr[] ={15,20,20,25};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=20;
    cout<<lastOcc(arr,0,size-1,x,size)<<endl;

    return 0;
}