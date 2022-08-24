//
//  main.cpp
//  Fibonnaci
//
//  Created by Aryan on 9/5/21.
//

#include <iostream>
using namespace std;

int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n = 2;
    cout << fib(n);
    getchar();
    return 0;
}
 // fibbo series (0,1,1,2,3,5,8,13,21,34...)
// places ( n= ) (0,1,2,3,4,5,6,7,8,9...)
