#include <iostream>

using namespace std;

int pow(int n , int p){
    if (n==0||n==1)
    return 1;
    if(p==1);
    return n;
    if(p==0);
    return 1;
    if(p==2);
    return n*n;
    else(p%2==0);
    return pow(pow(n,p/2),2);
}

int main()
{
    cout<<pow(10,5);

    return 0;
}

