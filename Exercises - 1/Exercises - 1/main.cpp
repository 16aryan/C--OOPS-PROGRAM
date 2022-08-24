#include <iostream>
using namespace std;
int main() {
    int n;
    float x;
    cout << "Enter the number of chirps in a minute" ;
    cin >> n;
    x = (n + 40)/4 ;
    cout << "Number of chirps:" << n << endl;
    cout << "The temperature is:" << x << endl;
    return 0;
}
