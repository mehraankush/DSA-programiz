#include <iostream>
using namespace std;

int isPow2(int n){
    if(n==0 || n==1){ return false;}
    return (( n & (n-1))==0);
}

int main(){
    cout<<isPow2(7)<<endl;
}