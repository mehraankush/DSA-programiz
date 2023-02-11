#include<iostream>
using namespace std;

// [15,25,20,20]  out : 2
// O(n)
int Index(int arr[],int n,int x){
    for(int i=0;i<n;i++){
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
    cout<<Index(arr,size,x)+1<<endl;

    return 0;
}