#include<iostream>
using namespace std;

//O(n)
// it's a binary array
int countOne(int arr[],int n){
    int count = 0;

    for(int i = 0; i < n;i++){
        if(arr[i] == 1)count++;
    }
    return( count?count:-1);
}

int main(){
    int arr[] ={0,0,1,1,1,1,1};
    int size= sizeof(arr)/sizeof(arr[0]);

   cout<<countOne(arr,size);
   
    return 0;
}