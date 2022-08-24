#include <iostream>
using namespace std;
int main() {
    int prog[5]; //Array
    int *pr1 = &prog[0]; //* is the pointer and & is the address operator
    int *pr2 = &prog[1];
    int *pr3 = &prog[2];
    
    cout << pr1 << endl;
    cout << pr2 << endl;
    cout << pr3 << endl;
    
    *pr1+=2;
    cout << "pr1 is now " << pr1 << endl;
}
