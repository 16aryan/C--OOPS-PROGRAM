//
//  main.cpp
//  sum
//
//  Created by Aryan on 9/1/21.
//

#include <iostream>
using namespace std;

// non-void return type
// function to calculate sum
int SUM(int a, int b)
{
    int s1 = a + b;
    return s1;
}
int main()
{
    int num1 = 10;
    int num2 = 10;
    int sum_of = SUM(num1, num2);
    cout << sum_of<<endl;
    return 0;
}
