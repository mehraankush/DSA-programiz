#include <iostream>
using namespace std;

int countBits(int n){
    int res = 0;
    while(n>0){
        n = n & (n-1);
        res++;}

    return res;
}


int main(){
    cout<<countBits(3)<<endl;
}

// time (total number of sets bits)