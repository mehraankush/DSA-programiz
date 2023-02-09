#include<iostream>
using namespace std;

//time O(logn)
// Aux O(logn)

int bSearch(int arr[],int low,int high,int x){
   
    if(low>high) return -1;
    int mid =(low+high)/2;
    
    if(arr[mid] == x) return mid;
    else if(arr[mid]>x){
        return bSearch(arr,low,mid-1,x);
    }
    else {
        return bSearch(arr,mid+1,high,x);
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 50;
    cout<<bSearch(arr,0,size-1,x);

    return 0;
}