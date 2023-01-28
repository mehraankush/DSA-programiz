#include<iostream>
using namespace std;

//Time O(n^2)

void swap(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(){
    int arr[] = {5,7,0,0,8,0,9,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        if(arr[i]==0){
                for(int j=i+1; j<size; j++){
                if(arr[j]!=0){
                    swap(&arr[i],&arr[j]);}
                }
            }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}