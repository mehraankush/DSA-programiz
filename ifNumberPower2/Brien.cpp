#include <iostream>
using namespace std;

bool isPow2(int n){
    int res = 0;
    if(n==0) {return false;}

    while(n>0){
        n = n & (n-1);
       res++;
    }
   return (res==1);
}

int main(){
    cout<<isPow2(4)<<endl;
}