#include<iostream>
using namespace std;
// Find if there is a  sum with given array
//TIme O(n)
void slide_window(int arr[],int n,int k){
    
 
    for(int i = 0; i < n;i++){
           int sum =0;
        for(int j = i; j < n;j++){
            sum += arr[j];
            if(sum==k){
                 cout<<"YES"<<endl;
                 return ;
            }
        }
    }
    cout<<"NO"<<endl;
    return;
}

int main(){
    int arr[] = {1,4,20,3,10,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k =33;
    slide_window(arr,size,k);

    return 0;
}