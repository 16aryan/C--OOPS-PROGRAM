#include <iostream>
using namespace std;

int main() {
int x ;
    cout << "Enter the number" <<endl;
    cin >> x;
    switch (x)
    {
        case 1:
            cout << "Choice is 1\n";
            break;
        case 2:
            cout << "Choice is 2\n";
            break;
        case 3:
            cout << "Choice is 3\n";
            break;
        default:
            cout << "Choice other than 1, 2 and 3\n";
            break;
    }
return 0;
}
