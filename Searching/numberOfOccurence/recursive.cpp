#include <iostream>
using namespace std;

// O(logn)
int firstOcc(int arr[],int low,int high,int x){
   
   if(low>high) return -1;

   int mid = (high+low)/2;
   if(x>arr[mid]){
    return (arr,mid+1,high,x);
   }
   else if(x<arr[mid]){
    return (arr,low,mid-1,x);
   }
   else{
        if(mid==0 || arr[mid-1] !=arr[mid]){
            return mid;
        }
        else{
            return firstOcc(arr,low,mid-1,x);
        }
   }
}

// O(logn)
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

int count(int arr[],int n,int x){
    int first = firstOcc(arr,0,n-1,x);
    if(first==-1) return 0;
    else{
        return (lastOcc(arr,0,n-1,x,n) - first +1);
    }
}

int main(){
    int arr[] ={15,20,20,20,20,25,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=20;
    cout<<count(arr,size,x)<<endl;

    return 0;
}