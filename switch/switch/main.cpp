//
//  main.cpp
//  switch
//
//  Created by Aryan on 7/16/21.
//

#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    switch(age){
        case 16:
            cout << "hey you are big now" <<endl;
            break;
        case 18:
            cout << "hey you can drive now" <<endl;
            break;
        case 21:
            cout << "Get some beer" <<endl;
            break;
        default:
            cout << "Enjoy your life" <<endl;
    }
    return 0;
}
