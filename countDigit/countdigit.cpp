#include <iostream>
#include <cmath>
using namespace  std;

int countDigit(int n){
  return floor(log10(n)+1);
}

int main(){
  
int res = countDigit(123);
cout<<res;
   
}