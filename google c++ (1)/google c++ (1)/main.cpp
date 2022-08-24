#include <iostream>
using namespace std;

int main() {
    int n = 0;
    do{
        cout << "Enter a number (-1 to quit)";
        if(!(cin >> n)){
            cout << " You entered non-numeric " <<endl;
            break;
        }
        if (n!=1){
            cout << "You entered " << n << endl;
        }
    }while (n!=1);
        cout << "All done "<<endl;
  return 0;
}
