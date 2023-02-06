#include<iostream>
using namespace std;

// TIme O(1) after doing sum pre cumputations
int prefixSum(int arr[],int l,int r){
    if(l!=0){
        return (arr[r] - arr[l]);
    }
    else{
        return arr[r];
    }
}
int main(){
    int arr[] ={2,8,3,9,6,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int mx = arr[0];
    for(int i=1; i<=size; i++){
         arr[i-1] =mx;
         mx = arr[i]+arr[i-1];
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    int l,r;
    cin>>l>>r;
    if(r<size)
    {cout<<prefixSum(arr,l,r);}
    else{
        cout<<"INvalid"<<endl;
    }

    return 0;
}