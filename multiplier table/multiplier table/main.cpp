//
//  main.cpp
//  multiplier table
//
//  Created by Aryan on 9/3/21.
//

#include <iostream>
using namespace std;
class solution{
public:
    void printTable(int n){
        cin >> n;
        int multiplier = 10;
        while(multiplier){
            cout << n*multiplier << " ";
            multiplier--;
        }
        cout << endl;
};
int main() {
    solution printobject;
    printobject.printTable();
    return 0;
}
