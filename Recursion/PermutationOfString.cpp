// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using namespace std;

void swap(char* a,char* b){
    char c = *a;
    *a = *b;
    *b = c;
}

void permu(string s, int i = 0){
    if(i==s.length()-1){
        cout<<s<<" ";
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(&s[i],&s[j]);
        permu(s,i+1);
        swap(&s[i],&s[j]);
    }
}
int main() {
   string s ="ABC";
  permu(s);


    return 0;
}