#include <iostream>
using namespace std;
//Theta(nd)
//space Theta(1)

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size= sizeof(arr)/sizeof(arr[0]);
    int temp= arr[0];
    int d;
    cin>>d;
     for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

     for(int i=0; i<d; i++){
        int temp = arr[0];
        for(int i=1; i<size; i++){
        arr[i-1]=arr[i];}
        arr[size-1] = temp;
     }
    
    for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}