#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    string str;
    int t=4;
    while(t--){
        getline(cin , str);
        cout<<str<<" : newline " << endl;
    }
    return 0;
}
