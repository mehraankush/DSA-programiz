#include <iostream>
using namespace std;
// 0 1 1 2 3 5 8 13 21
int fib(int n,int sum){
   if(n<=1){
    return n;
   }

    return sum = (fib(n-1,sum)+fib(n-2,sum));
}


int main(){
    int sum=0;
    int n;cin>>n; 

     cout<<fib(n,sum)<<endl;
}