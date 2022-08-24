#include <iostream>
#include <string>
using namespace std;
int main(){
    string uptxt;
    cout << "Enter the string either in lower or upper case \n";
    getline(cin,uptxt);
    for(int i=0;i<uptxt.length();i++)
        if(uptxt[i]>=64 && uptxt[i]<=90)
            uptxt[i]=uptxt[i]+32;
        else
            uptxt[i]=uptxt[i]-32;
    cout << "\nThe modified string is \n"<<uptxt;
    cout << "\n";
    return 0;
}
