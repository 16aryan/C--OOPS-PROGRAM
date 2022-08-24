//
//  main.cpp
//  Ternary to Decimal
//
//  Created by Aryan on 7/27/21.
//

#include <iostream>
#include <math.h>
#include <cstudio>
using namespace std;
void convertternary(int N);
    if (N == 0){
    return ;
    }
    int x = N % 3;
    N /= 3;
    if ( x < 0){
        N+=1;
    convertternary(N);
    }
    if (x < 0){
        cout << x + (3 * -1);
    }else{
        cout << x;
    }
    void convert(int Decimal)
    {
        cout << "Ternary number of "
             << Decimal << " is: ";
        if (Decimal != 0) {
                convertToTernary(Decimal);
        }else{
            cout << "0" << endl;
        }
         
int main(){
    int Decimal = 2747;
    convert(Decimal);
    return 0;
    
}
