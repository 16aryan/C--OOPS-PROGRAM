#include <iostream>
using namespace std;
int main(){
    cout <<"/t1/t2/t3/t4/t5/t6/t7/t8/t9/t10"<< endl;
    for(int c = 1 ; c < 11 ; c++){
        cout << c << "| " ;
    for(int i = 1 ; i < 11 ; i++){
        cout << i * c << '\t' ;
    }
        cout << endl;
}
    return 0;
}
