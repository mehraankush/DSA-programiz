#include<iostream>
using namespace std;//

//Time Theta(n)
//Spaceheta(1)
void swap(int* x, int* y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

 void reverse(int arr[],int low,int high){
    while(low<high){
        swap(&arr[low],&arr[high]);
        low++;
        high--;
    }
}

void Rotate(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size= sizeof(arr)/sizeof(arr[0]);
    int d;cin>>d;
    Rotate(arr,size,d);

    for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}