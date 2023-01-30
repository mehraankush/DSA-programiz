#include <iostream>
using namespace std;

//TIme O(n)
//space O(1)

int maxCount(bool arr[],int n){
    int res = 0,curr = 0;
    for(int i = 0; i < n;i++){
        if(arr[i] == 0){
            curr = 0;
        }
        else{
            curr++;
            res = max(res,curr);
        }
    }
    return res;
}

int main(){
    bool arr[] = {1,0,1,0,0,1,1,1,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxCount(arr,size);

    return 0;
}