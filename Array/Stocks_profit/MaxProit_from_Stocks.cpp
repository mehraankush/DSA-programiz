#include<iostream>
using namespace std;
//Time : O(n^2)
int MaxProfit(int arr[],int start,int end){
    if(end<=start){
        return 0;
    }
    int profit = 0;
    for(int i=start;i<end;i++){

        for(int j=i+1;j<=end;j++){
            if(arr[j]>arr[i]){
               int curr_profit=(arr[j]-arr[i])+
               MaxProfit(arr,start,i-1) // calculate profit for left of i 
               +MaxProfit(arr,j+1,end);// calculate profit for right of j
            
            profit = max(profit,curr_profit);
            }
        }
    }
    return profit;
}

int main(){
    int arr[]={1,5,3,8,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // cout<<size<<endl;
   cout<< MaxProfit(arr,0,size-1)<<endl;
    return 0;
}