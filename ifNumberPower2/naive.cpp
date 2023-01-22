#include <iostream>
using namespace std;

bool ispow2(int n){

    if(n==0) {return false;}

    while(n!=1){
        if(n%2 != 0){ return false; }
        n = n/2;
    }
    return true;
}

int main(){
    cout<<ispow2(7)<<endl;
}
