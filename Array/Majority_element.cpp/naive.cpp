#include <iostream>
using namespace std;

int MajorityElement(int arr[],int n){
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {8,7,6,8,6,6,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<MajorityElement(arr,size)<<endl;

    return 0;
}