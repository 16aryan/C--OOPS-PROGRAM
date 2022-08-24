//
//  main.cpp
//  Assignment and Increment Operator
//
//  Created by Aryan on 7/15/21.
//

#include <iostream>
using namespace std;
int main() {
    
    // Increment Operator
    cout << "Below are the results obtained from the Increment Operator" << endl;
    int x = 0;
    cout << x++ <<endl;
    cout << x <<endl;
    int y = 0;
    cout << ++y <<endl;
    cout << y <<endl;
    
    // Assignment Operator
    
    int z = 20 ;
    z -=5;
    cout << " The result of Assignment Operator is: "<< z <<endl; //Subtraction
    
    int a = 20 ;
    a *=5;
    cout << " The result of Assignment Operator is: "<< a <<endl; //Product
    
    int b = 20 ;
    b /=5;
    cout << " The result of Assignment Operator is: "<< b <<endl; //Division
    
    int c = 20 ;
    c +=5;
    cout << " The result of Assignment Operator is: "<< c <<endl;  //Addition

    int d = 20;
    d %=5;
    cout << " The result of Assignment Operator is: "<< d << endl; //Remainder
    
    return 0;
}
