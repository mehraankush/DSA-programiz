#include <iostream>
#include<cstring>
using namespace std;

void subset(string &s, string curr =" ",int i=0){
    
    if(i==s.length()){
        cout<<"current subset is" <<curr<<endl;
        return;
    }
    subset(s,curr,i+1);
    subset(s,curr+s[i],i+1);
}

int main() {
    
    string n;
    cin>>n;
    subset(n);

    return 0;
}