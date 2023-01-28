#include<iostream>
using namespace std;
//Time O(n^2)

void Leader(int arr[],int n){
    
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag = true;
                break;
            }
        }
        if(flag==false){
        cout<<arr[i]<<" ";}
    }
    
}

int  main(){
    int arr[]={3,10,5,6,7,3,2,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    Leader(arr,size);
    return 0;
}