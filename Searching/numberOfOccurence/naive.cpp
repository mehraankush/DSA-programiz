#include <iostream>
using namespace std;
// O(n)
int count (int arr[],int n,int x){
    int res=0;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            res++;
        }
    }
    return res;
}

int main(){
    int arr[] ={15,25,20,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=20;
    cout<<count(arr,size,x)<<endl;

    return 0;
}