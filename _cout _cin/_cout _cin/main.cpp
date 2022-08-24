//
//  main.cpp
//  <<cout <<cin
//
//  Created by Aryan on 7/12/21.
//

#include <iostream>
using namespace std;
int main() {
    int a ;
    int b ;
    int sum ;
    int difference ;
    int product ;
    int division ;
    int remainder;
    cout << "Enter a number\n";
    cin >> a;
    cout << "Enter another number";
    cin >> b;
    sum = a + b;
    difference = a - b;
    product = a*b;
    division = a/b;
    remainder = a%b;
    cout << "The sum is " << sum <<endl;
    cout << "The difference is " << difference <<endl;
    cout << "The product is " << product <<endl;
    cout << "The division is " << division <<endl;
    cout << "The remainder is " << remainder <<endl;
    cout << "Overwriting Values"<<endl;
    int z = 23 ;
    z=45;
    cout << z <<endl;
    return 0;
}
