#include <iostream>
using namespace std;

bool prime(int x){
    
    if(x==1) return false;
    if(x==2 || x==3) return true;

    if(x%2==0 || x%3==0) return false;

    for(int i = 5;i*i<x;i+6){
      if(x%i==0 || (x+2)%i==0){
        return false;
      }
    }
    return true ;
}

int main(){
    int result = prime(130);
    cout<<result<<endl;
}