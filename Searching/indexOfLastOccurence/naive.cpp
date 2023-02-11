#include <iostream>
using namespace std;

int lastOcc(int arr[],int n,int x){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] ={15,25,20,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=20;
    cout<<lastOcc(arr,size,x)+1<<endl;

    return 0;
}