#include <iostream>
using namespace std;

int findMajory(int arr[],int n){
    int res=0;
    int count = 1;

    // elect a element which  would be only majority  element if it exist
    for(int i=1;i<n;i++){
       if(arr[res]==arr[i]){
        count++;
       }
       else{
        count--;
       }
       if(count==0){count=1; res=i;}
    }

   // find the occurence of the elected  element 
    count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[res]){
            count++;
        }
    }
    if(count<=n/2){
        return -1;
    }

    return res;
}

int main(){
    int arr[] = {8,7,6,8,6,6,6,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<findMajory(arr,size)<<endl;

    return 0;
}