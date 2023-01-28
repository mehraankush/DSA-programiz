#include <iostream>
using namespace std;
//Theta(n)
int Leader(int arr[],int n){
    int curr_lea = arr[n-1];
    cout<<curr_lea<<" ";
    for(int i=n;i>=0;i--){
        if(arr[i]>curr_lea){
            curr_lea=arr[i];
            cout<<curr_lea<<" ";}
    }
}
int  main(){
    int arr[]={3,10,5,6,7,3,9,8};
    int size=sizeof(arr)/sizeof(arr[0]);

    Leader(arr,size);
    return 0;
}