#include<iostream>
using namespace std;
//Time O(n)

void swap(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(){
     int count = 0;
     int arr[] ={2,3,4,0,0,8,9,0};
     int size = sizeof(arr)/sizeof(arr[0]);
     for(int i=0; i<size;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
     }

     for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
     }
}