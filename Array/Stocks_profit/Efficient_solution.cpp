#include<iostream>
using namespace std;
// main idea is to keep track of the prices if it goes up keep adding profit if it goes down don't do anything
int maxProfit(int arr[],int n){
    int profit = 0;

    for(int i=1;i<n;i++){
       if(arr[i]>arr[i-1]){
        profit+=arr[i]-arr[i-1];
       }
    }

    return profit;
}

int main(){
    int arr[] ={1,5,3,8,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxProfit(arr,size)<<endl;

    return 0;
}
    