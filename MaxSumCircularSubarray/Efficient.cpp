#include <iostream>
using namespace std;



// kadons algorithm
int MaxSumArray(int arr[],int n){
    int res = arr[0];
    int MaxEnding = arr[0];

   for(int i=1;i<n;i++){
    MaxEnding = max(arr[i],MaxEnding+arr[i]);
    res = max(res,MaxEnding);
   }
 return res;
}

int Overal_sum(int arr[],int n){
    int arr_sum =0;
    int max_normal = MaxSumArray(arr,n);
    if(max_normal<0){
        return max_normal;
    }
    for(int i =0;i<n;i++){
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }

    int max_circular_sum = arr_sum + MaxSumArray(arr,n);

    return max(max_normal,max_circular_sum);
}
int main(){
    int arr[] = {5,-2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<Overal_sum(arr,size);

    return 0;
}