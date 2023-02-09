#include<iostream>
using namespace std;

// time O(logn)
//Aux O(1)

int BinarySearch(int arr[],int n,int x){
    int low=0;
    int high = n-1;

    while(low<=high){
        int mid=(low+high)/2;
        if(x==arr[mid]){
            return mid;
        }else if(arr[mid]>x){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 50;
    cout<<BinarySearch(arr,size,x);

    return 0;
}