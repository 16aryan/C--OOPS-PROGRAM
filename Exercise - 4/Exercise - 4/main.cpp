#include <iostream>
using namespace std;
int reversedigits(int x){
    string strin = to_string(x);
    reverse(strin.begin(), strin.end());
    x = stoi(strin);
    return x;
}
int reversedigitz(int y){
    string strin = to_string(y);
    reverse(strin.begin(), strin.end());
    y = stoi(strin);
    return y;
}
int main() {
    int x , y , z;
    cout << "Enter the number to be reversed";
    cin >> x;
    cout << "The input no. is " << x << endl;
    cout << "Reverse of the no. is " << reversedigits(x) << endl ;
    y = x - reversedigits(x);
    cout << "Subtract :" << y <<endl;
    cout << "Reverse of the no. is " << reversedigitz(y) << endl ;
    z = reversedigitz(y) + y;
    cout <<"Add:" << z << endl;
    return 0;
}
