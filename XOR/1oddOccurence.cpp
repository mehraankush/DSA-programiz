#include <iostream>
using namespace std;

int oddOccurence(int arr[], int n){
    
    int res =0;
    for(int i=0; i<n; i++){
      res = res ^ arr[i];
    }
    return res;
}

int main(){
    int arr[] = [3 , 2 , 2, 6, 7 ,6];
}