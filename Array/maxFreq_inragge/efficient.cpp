#include<iostream>
#include<vector>
using namespace std;

//applicable only for array size less then 1000
int maxocc(int l[],int r[],int n){

    vector<int> arr[1000];

    for(int i=0;i<n;i++){
        arr.push_back(l[i])++;
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int maxm = arr[0];
    int res=0;

    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
        if(maxm<arr[i]){
            maxm = arr[i];
            res=i;
        }
    }

    return res;
}

int main(){
    int l[] = {1,2,3};
    int r[] = {3,5,7};

    int size = sizeof(l)/sizeof(l[0]);

   cout<<maxocc(l,r,size);

   return 0;
}