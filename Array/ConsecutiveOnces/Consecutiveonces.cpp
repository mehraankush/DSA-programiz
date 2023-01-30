#include <iostream>
using namespace std;
// time O(n^2)
//Space O(1)
int maxCount(bool arr[], int n){
    int res = 0;
    for(int i = 0; i < n;i++){
        int curr = 0;
        for(int j = i; j < n;j++){
            if(arr[j] ==1){
                curr++;
            }
            else{
                break;
            }
        }
        res = max(res,curr);
    }
    return res;
}

int main(){
    bool arr[] = {1,0,1,0,0,1,1,1,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxCount(arr,size);

    return 0;
}