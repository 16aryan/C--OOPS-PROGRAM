//
//  main.cpp
//  convert c++
//
//  Created by Aryan on 9/2/21.
//

#include <iostream>
using namespace std;

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int solveMeThird(int a, int b , int c) {
  return a*b;
}
int main() {
  int t,i;
  int num1,num2,num3;
    cin >> t;
    cin >> num1;
    cin >> num2;
    cin >> num3;

  int sum;
  for ( i = 0;i < t; i++ ) {
    
    sum = solveMeThird(num1,num2,num3);
    cout <<" " << sum;
  }
  return 0;
}
