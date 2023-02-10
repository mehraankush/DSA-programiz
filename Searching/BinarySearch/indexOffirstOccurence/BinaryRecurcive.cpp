#include <iostream>
using namespace std;

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

int main(){
    int arr[] ={15,25,20,20,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=20;
    cout<<firstOcc(arr,0,size-1,x)<<endl;

    return 0;
}