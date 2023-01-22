#include <iostream>
using namespace std;

int fact(int n){
    int res=1;
    
    for(int i=2; i<=n; i++){
        res = res*i;
    }
    return res;
}

int main(){
    cout<<fact(5)<<endl;
}