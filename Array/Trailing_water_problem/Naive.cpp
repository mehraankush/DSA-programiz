#include<iostream>
using namespace std;
//TIme : theta(n^2)
int Trai_water(int arr[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){

       int Lmax=arr[i];
       for(int j=0;j<i;j++){
        Lmax=max(Lmax,arr[j]);}

       int Rmax=arr[i];
       for(int j=i+1;j<n;j++){
        Rmax=max(Rmax,arr[j]);}


       res +=min(Rmax,Lmax)-arr[i];
    }

    return res;
}

int main(){
   int arr[]={3,0,1,2,5};
   int size=sizeof(arr)/sizeof(arr[0]);

   cout<<Trai_water(arr,size)<<endl;
  return 0;
}