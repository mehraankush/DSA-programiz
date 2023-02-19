#include <iostream>
using namespace std;


int sqaureRoot(int n){
    int low=1,high=n;
    int ans =-1;

    while(low<=high)
    {
        int mid=low+high/2;
        int root = mid*mid;

        if(root==n)
           {return mid;}
        else if(root>n){
            high = mid-1;}

        else{
            low = mid+1;
            ans = mid;}
    }

    return ans;
}

int main(){
    int num = 15;
    cout<<sqaureRoot(num);

    return 0;
}