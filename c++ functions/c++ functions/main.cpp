//
//  main.cpp
//  c++ functions
//
//  Created by Aryan: on 11/30/21.
//

#include <iostream>
using namespace std;
int * func(int n){
    int*p;
    p= (int*)malloc(n*sizeof(int));
    return(p);
}
int area(struct Rectangle &r1){
    r1.length++;
    return r1.length * r1.breath;
}
int main() {
    int*A;
    A=func(5);
    struct Rectangle r={10,5};
    printf("%d",area(r));
    return 0;
}
