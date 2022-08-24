#include <iostream>

using namespace std;

int func(int n)
{
    int var = n+1;
    cout<< var <<endl;
    if(n==10)
    return n;
    return func(n+1)+1;
}
int main(){
    cout << func(5) << endl;
    return 0;
}

