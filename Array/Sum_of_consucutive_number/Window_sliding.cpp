#include<iostream>
using namespace std;

int slide_Window(int arr[],int n ,int k){
    
    int max_sum=0;
    for(int i=0;i<k;i++){
       max_sum += arr[i];
    }
     
    int curr_sum=0;
    for(int i=k;i<n;i++){
       curr_sum = (max_sum - arr[i-k]) + arr[i];
       max_sum = max(max_sum,curr_sum);
    }

return max_sum;
}

int main(){

    int arr[] = {5,-10,6,90,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k =2;
    cout<<slide_Window(arr,size,k);

    return 0;
}