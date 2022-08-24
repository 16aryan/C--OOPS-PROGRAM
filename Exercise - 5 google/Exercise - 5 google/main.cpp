#include <iostream>
using namespace std;

void banner(string alpha){
    for(int i=0 ; i < alpha.size() ; i++){
        switch (alpha[i]){
            case 'a' : case 'A' :
                printA(); break;
            case 'b' : case 'B' :
                printB(); break;
            case 'c' : case 'C' :
                printC(); break;
            case 'd' : case 'D' :
                printD(); break;
            case 'e' : case 'E' :
                printE(); break;
            case 'f' : case 'F' :
                printF(); break;
        }
    }
}
void printA(){
    cout <<"       A";
    cout <<"      A A";
    cout <<"     AAAAA";
    cout <<"    A     A";
    cout <<"   A       A";
}
void printB(){
    cout <<"     BBBBB";
    cout <<"     B   BB";
    cout <<"     BBBBB";
    cout <<"     B   BB ";
    cout <<"     BBBBB ";
}
int main() {
    string alpha;
    cout << " Introduction To Alphabets" ;
    cin >> alpha;
    banner(alpha);
    return 0;
}
