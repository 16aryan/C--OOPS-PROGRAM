//
//  main.cpp
//  Functions 2.0
//
//  Created by Aryan on 7/12/21.
//

#include <iostream>
using namespace std;
void printcrap(int x){
    cout<< "Buck's favourite number is\t" << x <<endl;
}
int addnumbers (int x , int y , int z , int a){
    int answer = (x + y + z + a);
    return answer;
}

int main() {
    printcrap(20);
    cout << "The result of the calculation is :" <<endl;
    cout << addnumbers(10,20,30,40) <<endl;
    return 0;
}
