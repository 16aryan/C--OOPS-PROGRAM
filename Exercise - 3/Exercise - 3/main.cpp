#include <iostream>
using namespace std;
int main() {
    int h , x , y ,z;
    cout << "The numbers of seconds" ;
    cin >> h;
    x = h % 60;
    cout << " Hours " << x << endl;
    y = x % 60;
    cout << " Minutes " << y << endl;
    z = y % 60;
    cout << " Seconds " << z << endl;
    return 0;
}
