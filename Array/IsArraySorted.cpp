#include <iostream>
#include <vector>
using namespace std;

bool IsSorted(vector<int>&arr){
     for(int i=1;i<arr.size();i++){
         if(arr[i]<arr[i-1]){
             return false;
         }
     }
    return true; 
}
int main(){
    vector<int> arr{2,4,5,6,8,12};
    cout<<IsSorted(arr)<<endl;
   
    return 0;
}