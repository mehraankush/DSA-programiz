// we are finding that kth bit i the given number is set to 1 or not

#include <iostream>
using namespace std;

void bitcheck_1st_solution(int n, int k){

    if(n & (1<<(k-1)) !=0)
       cout<<"Yes"<<endl;
    else
       cout<<"No"<<endl;
} 

void bitcheck_2nd_solution(int n, int k){

    if(((n>>(k-1)) & 1) == 1)
       cout<<"Yes"<<endl;
    else
       cout<<"No"<<endl;
} 

int main(){
     bitcheck_2nd_solution(13,3);
}