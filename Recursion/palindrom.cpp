// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using namespace std;

bool isPallindrom(string &s, int start, int end){
    if(start>=end)
        return true;
    return (s[start]==s[end]) && isPallindrom(s,start+1,end-1);
}

int main() {
    
    string n;cin>>n;
    int size = n.size();
    cout<<size<<endl;
    cout<< isPallindrom(n,0, size-1);

    return 0;
}