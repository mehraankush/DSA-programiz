#include <iostream>
using namespace std;

int firstOcc(int arr[],int n, int x){

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
            if(mid==0|| arr[mid-1] !=arr[mid]){
                return mid;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] ={15,25,10,20,30};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=20;
    cout<<firstOcc(arr,size,x)<<endl;

    return 0;
}