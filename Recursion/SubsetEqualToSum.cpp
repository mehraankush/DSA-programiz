// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int countSub(int arr[], int n, int sum){
    if(n==0){
        return  (sum==0) ? 1:0;
    }
    return ( (countSub(arr,n-1,sum)) + countSub(arr, n-1 ,sum-arr[n-1]) );
}
int main() {
   int sum = 9;
   int arr[] = { 2,3,4,5,6};
   int size = sizeof(arr)/sizeof(arr[0]);
//   cout<<size<<endl;;
  cout<<countSub(arr,size,sum);

    return 0;
}