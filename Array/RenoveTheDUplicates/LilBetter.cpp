#include<iostream>
using namespace std;
//ime O(n)
//SPace O(1)
int RemoveDupli(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
      if(arr[res-1]!=arr[i]){
        arr[res] = arr[i];
        res++;
      }
    }
    return res;
}
int main(){
    int arr[] = {20,30,30,40,50,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<RemoveDupli(arr,size)<<endl;
}