//
//  main.cpp
//  linear search
//
//  Created by Aryan on 9/1/21.
//

#include <iostream>
using namespace std;

void findElement(int arr[] , int size , int key){
    for(int i=0 ; i < size ; i++){
        if(arr[i] == key){
            cout << "The searched key is in position:"<<i+1<<endl;
            break;
        }
    }
}
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    int key = 2;
    
    findElement(arr,n,key);
    return 0;
}
