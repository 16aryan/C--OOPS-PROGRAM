//
//  main.cpp
//  sorting array
//
//  Created by Aryan: on 11/27/21.
//

#include <iostream>
#include <algorithm>
using namespace std;

void show(int a[] ,int array_size){
    for(int i=0 ; i<array_size;i++)
        cout << a[i] << " ";
}

int main(){
    int a[]={1,5,8,9,6,7,3,4,2,0};
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "This array before sorting\n\n";
    show(a,asize);
    sort(a,a+asize);
    cout<< "This array after sorting\n\n";
    show(a,asize);
    return 0;
}
