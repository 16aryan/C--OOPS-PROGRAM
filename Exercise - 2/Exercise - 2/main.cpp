#include <iostream>
using namespace std;
int main() {
    float n1 , n2 , n3 , n4 , m , o , c;
    int y , z , x , w , a;
    cout << " Enter the score for the first assignment " << n1 ;
    cin >> n1 ;
    cout << " Enter the score for the second assignment " << n2 ;
    cin >> n2 ;
    cout << " Enter the score for the third assignment " << n3 ;
    cin >> n3 ;
    cout << " Enter the score for the fourth assignment " << n4 ;
    cin >> n4 ;
    y = ((n1 + n2 + n3 + n4)/4)*0.40 ;
    cout << " Enter the score for the mid term examination " << m ;
    cin >> m;
    z = 0.15 * m;
    cout << " Enter the score for the final examination " << o ;
    cin >> o ;
    x = 0.35 * o;
    cout << " Enter the score for the section grade " << c ;
    cin >> c ;
    w = 0.10 * c;
    a = float(w+x+y+z);
    cout << " The final grade is " << a << endl ;
    return 0;
}
