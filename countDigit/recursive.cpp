#include <iostream>
using namespace std;

int countDigit(int n){
    if(n==0)return 0;

    return 1+countDigit(n/10);
}

int main(){

int res = countDigit(123);
cout<<res;
   
}