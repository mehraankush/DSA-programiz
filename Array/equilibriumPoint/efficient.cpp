// a point where in sum of all the left elements is equal to the sm of elements in the right
// that point is called equilibrium
#include <iostream>
using namespace std;

//time O(n)
// idea is simple to calculate total sum first and then subtract the 0 1 2 .. index to find the right sum 
// and if it is equa;=l we found the point
bool equil(int arr[],int n){

     int t_sum=0;
    // total sum o fthe array
    for(int i=0;i<n;i++){
     t_sum+=arr[i];
    }

    // check for the equillibrium point
    int l_sum=0;
    for(int i=0;i<n;i++){
       if(l_sum== t_sum - arr[i]){
        return true;
       }
       l_sum+=arr[i];
       t_sum-=arr[i];
    }
    return false;
}

int main(){
    int arr[]={4,-2,3};
    // int arr[]={3,4,8,-9,20,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<equil(arr,size);

    return 0;
}