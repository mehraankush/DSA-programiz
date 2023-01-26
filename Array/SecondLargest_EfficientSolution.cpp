#include<iostream>
#include<vector>
using namespace std;

int SecondLargest(vector<int>&arr){
    int res = -1;
    int largest = 0;

    for(int i=1; i<arr.size(); i++){

        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }

        else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i] > arr[res]){
                res = i;
            }   
        }    
    }
      return res;
}


int main(){
    vector<int>arr {3,4,5,6,7,8,9};

    cout<<"res = "<<arr[SecondLargest(arr)]<<endl;
    return 0;
}
