#include <iostream>
using namespace std;
// 0 1 1 2 3 5 8 13 21
int fib(int n){
    int a=0;int b=1,sum=0,c=0;

    for(int i=0; i<n; i++){
       sum +=a;
       c=a+b;
       a=b;
       b=c;
    }

    return sum;
}


int main(){
    cout<<fib(5)<<endl;
}