// a point where in sum of all the left elements is equal to the sm of elements in the right
// that point is called equilibrium
#include <iostream>
using namespace std;

//time O(n^2)

bool equil(int arr[],int n){
    for(int i=0;i<n;i++){
      int l_sum=0;
      int r_sum=0;
      for(int j=0;j<i;j++){
        l_sum+=arr[j];
      }
      for(int k=i+1;k<n;k++){
        r_sum+=arr[k];
      }

      if(r_sum == l_sum){ return true; }
    }
    return false;
}

int main(){
    int arr[]={4,-2,2};
    // int arr[]={3,4,8,-9,20,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<equil(arr,size);

    return 0;
}