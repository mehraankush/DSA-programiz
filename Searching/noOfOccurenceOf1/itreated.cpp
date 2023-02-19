#include<iostream>
using namespace std;

int OccOfOne(int arr[],int size){

   int low=0,high=size-1;
   
   while(low<=high){
     int mid=low+high/2;
     
     if(arr[mid]==0){
        low=mid+1;
     }
     else{
        if(mid==0 || arr[mid] != arr[mid-1])
             return size-mid;
        else 
           high = mid-1;
     }
   }

   return 0;
}


int main(){
    int arr[] = {0,0,0,1,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x=1;
    cout<<OccOfOne(arr,size);

    return 0;
}