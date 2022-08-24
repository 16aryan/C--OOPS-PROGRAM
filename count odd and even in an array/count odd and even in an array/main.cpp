#include <iostream>
using namespace std;

int main()
{
//fill your code
int n;
cin >> n;
int arr[n];
for(int i = 0; i < n; i++)
{
cin >> arr[i];
}
int count_odd =0, count_even = 0;
for(int i = 0; i < n; i++)
{
if(arr[i] % 2 == 1)
count_odd++;
else
count_even++;
}
    cout << "ODD:" << count_odd <<endl;
    cout << "EVEN:" << count_even << endl;
return 0;
}
