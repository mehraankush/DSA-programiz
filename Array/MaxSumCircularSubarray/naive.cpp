#include <iostream>
using namespace std;

int maxCircularSubayyar(int arr[],int n){
    int res = arr[0];

    for(int i = 0; i <n; i++){
        int curr_sum = arr[i];
        int curr_max = arr[i];
          for(int j = 1; j <n;j++){
             int index = (i+j)%2;
             curr_sum += arr[index];
             curr_max = max(curr_sum,arr[i]);
          }
        res = max(res,curr_max);
    }
    return res;
}

int main(){
    int arr[] = {5,-2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<maxCircularSubayyar(arr,size);

}