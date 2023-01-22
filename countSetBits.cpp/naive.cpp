#include <iostream>
using namespace std;

int countSet(int n){
    
    int res = 0;
    while(n>0){
        if(n%2!=0){res++;}
        res++;
        n = n/10;
    }
    return res;
}

int main(){
    cout<<countSet(8)<<endl;
}

// time (total number of bits)