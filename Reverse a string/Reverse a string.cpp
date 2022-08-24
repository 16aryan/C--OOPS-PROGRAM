#include <bits/stdc++.h>
using namespace std;
int main()
{string str ;
    cout << "Enter a string\n";
    getline(cin,str);
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}