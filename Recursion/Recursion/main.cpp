//
//  main.cpp
//  Recursion
//
//  Created by Aryan on 7/17/21.
//

#include <iostream>
using namespace std;

int factorialfinder(int x){
    if(x==1){
        return 1 ;
    }else{
        return x*factorialfinder(x-1);
    }
}
int main() {
    cout << factorialfinder(5) << endl;
    return 0;
}
