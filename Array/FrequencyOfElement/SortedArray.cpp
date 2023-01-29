#include <iostream>
using namespace std;

//time : theta(n)
void frequency(int arr[],int n){
    int freq = 1;
    int i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        i++;
        freq=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2]){
        cout<<arr[i]<<" "<<freq<<endl;
    }
}

int main(){
    int arr [] ={10,10,20,30,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    frequency(arr,size);
    
    return 0;
}
