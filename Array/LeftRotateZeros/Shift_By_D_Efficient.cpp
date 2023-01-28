#include <iostream>
using namespace std;
//Theta(n)
//space Theta(d)

void Reverse(int arr[],int size,int d){
      int temp[d];
     for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
     
    for(int i=0; i<d; i++){
       temp[i] = arr[i];
    }
    for(int i=d; i<size; i++){
        arr[i-d]=arr[i];}

     for(int i=0; i<d; i++){
        arr[size-d+i] = temp[i];
     }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size= sizeof(arr)/sizeof(arr[0]);
    int d;cin>>d;
    
    Reverse(arr,size,d);

    for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}