#include <iostream>
using namespace std;

int getWater(int arr[],int n){
    int res=0;
    int Lmax[n],Rmax[n];

    Lmax[0]=arr[0];
    for(int i=1;i<n;i++){
        Lmax[i]= max(Lmax[i-1],arr[i]);
    }

    Rmax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        Rmax[i]= max(Rmax[i+1],arr[i]);
    }

    for(int i=1;i<n-1;i++){
        res += min(Lmax[i],Rmax[i])-arr[i];
    }

    return res;
}

int main(){
   int arr[]={3,0,1,2,5};
   int size=sizeof(arr)/sizeof(arr[0]);

   cout<<getWater(arr,size)<<endl;
  return 0;
}