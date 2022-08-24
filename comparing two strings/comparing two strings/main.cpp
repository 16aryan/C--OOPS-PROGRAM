#include <iostream>
using namespace std;
int main(){
    string str1;
    string str2;
    cout << "Enter the first string\n";
    cin>>str1;
    cout << "Enter the second string\n";
    cin>>str2;
    if (str1==str2)
        cout << " Strings are equal "<<endl;
    else
        cout << " Strings are not equal "<<endl;
    return 0;
}
