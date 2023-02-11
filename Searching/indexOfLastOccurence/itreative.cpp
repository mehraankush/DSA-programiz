#include <iostream>
using namespace std;
// time O(logn)
//space O(1)
int lastOcc(int arr[],int n, int x){

    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(x>arr[mid]){
            low=mid+1;
        }
        else if(x<arr[mid]){
            high = mid-1;
        }
        else{
            if(mid==n-1|| arr[mid] !=arr[mid+1]){
                return mid;
            }else{
               low == mid+1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] ={15,25,10,20,20,30,};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=20;
    cout<<lastOcc(arr,size,x)<<endl;

    return 0;
}