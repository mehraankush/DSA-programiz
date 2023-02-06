#include <iostream>
using namespace std;

//time : O(n^2)

int max_consucutive_sum(int arr[],int n,int k){

    int max_sum = INT_MIN;
    
    // loop will run until n-k index of the given array
    for(int i=0;i+k-1<n;i++){
        int curr_sum = 0;
       for(int j=0;j<k;j++){
          curr_sum += arr[i+j];
       }
       max_sum = max(max_sum,curr_sum);
    }
    return max_sum;       
}

int main(){

    int arr[] = {5,-10,6,90,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k =2;
    cout<<max_consucutive_sum(arr,size,k);

    return 0;
}