#include<iostream>
#include<vector>
using namespace std;

int LargestElement( vector<int>&arr){
    int Largest = 0;

    for(int i=1; i<arr.size(); i++){
        if(arr[i]>Largest){
            Largest = i;
        }
    }
    return Largest;
}

int SecondLargest(vector<int> &arr){
    int larg = LargestElement(arr);
    int res =-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=arr[larg]){
            if(res==-1){
                res=0;
            }
            else if(arr[i]>arr[res]){
                res = i;
            }
        }
    }
    return res;
}
int main(){
     vector<int> arr{3,4,5,37,43,2,2};
     cout<<arr[SecondLargest(arr)]<<endl;
}