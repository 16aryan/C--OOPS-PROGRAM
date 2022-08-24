//
//  main.cpp
//  google functions 1 and 2
//
//  Created by Aryan on 9/14/21.
//

#include <iostream>
using namespace std;

int function1 (int a = 18 , int b = 6){
    return (a-b);
}
int function2 (){
    int a , b;
    int c;
    c = a+b;
    return c;
}
int main() {
    int a;
    int b = 12;
    int c = 0;
    a = function1 (b,a);
    c = function2();
    cout << ":a" << a << ":b" << b << ":c" << c <<endl;
    return 0;
}
