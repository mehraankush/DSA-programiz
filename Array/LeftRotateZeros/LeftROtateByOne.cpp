#include <iostream>
using namespace std;

void Reverse(int arr[],int n){
     int temp= arr[0];
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
     arr[n-1] = temp;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size= sizeof(arr)/sizeof(arr[0]);
   
     Reverse(arr,size);
    
     for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
    }
   
    return 0;
}