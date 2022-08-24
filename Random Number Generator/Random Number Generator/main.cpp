//
//  main.cpp
//  Random Number Generator
//
//  Created by Aryan on 7/17/21.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(25);
    for(int x=1 ; x<25 ; x++){
        cout << 1 + (rand()%6) <<endl;
    }
    cout << "Now another series of random numbers :" <<endl;
    for(int x=1 ; x<25 ; x++){
        cout << rand() <<endl;
    }
    return 0;
}
