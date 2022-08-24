#include<iostream>
using namespace std;
int main()
{
    char chUpper, chLower;
    int ascii;
    cout<<"Enter the Character (in Uppercase): ";
    cin>>chUpper;
    ascii = chUpper;
    ascii = ascii+32;
    chLower = ascii;
    cout<<"\nIts Lowercase: "<<chLower;
    cout<<endl;
    return 0;
}
