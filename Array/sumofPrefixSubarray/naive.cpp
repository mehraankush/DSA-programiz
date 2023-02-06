#include<iostream>
using namespace std;
// time O(n);
int prefixSum(int  arr[],int l,int r){
     int sum=0;
     for(int i=l;i<=r;i++){
        sum += arr[i];
     }

     return sum;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    // int size = sizeof(arr)/sizeof(arr[0]);
   int l,r;
   cin>>l>>r;
    cout<<prefixSum(arr,l,r);

    return 0;
}