#include <iostream>
using namespace std;

//O(x^1/2)

int main(){
    int i=1;
    int num=54;


    while(i*i<=num) i++;

    cout<<i-1;
}