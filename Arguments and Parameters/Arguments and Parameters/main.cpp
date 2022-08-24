//
//  main.cpp
//  Arguments and Parameters
//
//  Created by Aryan on 7/17/21.
//

#include <iostream>
using namespace std;
int volume ( int l=1 , int b=1 , int h=1){
    return l*b*h;
}
int main() {
    cout << volume (5,6,7) << endl;
    return 0;
}
