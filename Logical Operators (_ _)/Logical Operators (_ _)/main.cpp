//
//  main.cpp
//  Logical Operators (& |)
//
//  Created by Aryan on 7/16/21.
//

#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age:";
    cin >> age;
    int money;
    cout << "Enter the money you earned today :";
    cin >> money;
    if( age > 18 && money > 500){              //Here in the case of "&&" condition both the conditions                                           //should be true then only it will print the text
        cout << "Keep doing well !!" <<endl;
    }
    if( age > 18 || money > 500){             //Here in the case of "||" even if only one condition is true
        cout << "Keep doing well !!" <<endl;  //it would print the text .
    }
    return 0;
}
