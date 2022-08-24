#include <iostream>
using namespace std;
int main() {
    int a , b , ans = 0 , cur = 2 , m;
    cin >> a >> b >> m;
    for(int i=0 ;i<log2(b) ;i++){
        if((b>>i)%2){
            ans += cur;
        cur = (cur*cur)%m;
        }
    }
    return 0;
}
