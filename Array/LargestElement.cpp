#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr {2,4,5,6,33,2};
    int res = arr[0];

    for(int i=1; i<arr.size(); i++){
        if(arr[i]>res){
            res = arr[i];
        }
    }
    cout<<"res = "<<res<<endl;
    return 0;
}