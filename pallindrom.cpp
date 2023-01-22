#include <iostream>
using namespace std;

bool palindrom(int n){
   int temp = n;
   int res =0;

   while(temp!=0){
     res = res*10 + temp%10;
     temp = temp/10;
   }
   return (res==n);
}

int main(){
    cout<<palindrom(12321)<<endl;
}
