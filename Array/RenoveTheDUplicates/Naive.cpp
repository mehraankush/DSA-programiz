#include<iostream>
#include<vector>
using namespace std;

//  vector<int> RemoveDuplicates(vector<int> &arr){
//     vector<int>arr1;
//     arr1[0] = arr[0];
//     int res = 1;
//     for(int i = 1; i < arr.size();i++){
//         if(arr[res-1]!=arr[i]){
//             arr1[res] =arr[i];
//             res++;
//         }
//     }
//     // arr = arr1;
//     // for(int i=0;i<arr.size();i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     return arr1;

// }

//Time O(n)
//Space O(n)

int RemoveDuplicates(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=0;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }

    }
    for(int i=0;i<res;i++){
        arr[i]=temp[i]; 
    }
    return res;
}

int main(){
   int arr[] ={20,30,30,30,40,50};
   int size = sizeof(arr)/sizeof(arr[0]);
   int sizeOfNewArray = RemoveDuplicates(arr,size);
   cout<<"sizeOfNewArray "<<sizeOfNewArray<<" "<<endl;
}
