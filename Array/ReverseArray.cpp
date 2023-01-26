#include <iostream>
#include <vector>
using namespace std;


//second approach swap the elements
void Reverse(vector<int>& v) {
    int low =0;
    int high=v.size()-1;

    while(low<high){
        int temp = v[low];
        v[low] = v[high];
        v[high] = temp;
        low++;
        high--;
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> arr{2,4,5,6,33,2};
    // vector<int>arr2;
    // int n = arr.size() -1;
    //  for(int i=n;i>=0;i--){
    //      arr2.push_back(arr[i]);
    //  }
    //  for(auto i:arr2){
    //      cout<<i<<" ";
    //  }
    Reverse(arr);
   
    return 0;
}