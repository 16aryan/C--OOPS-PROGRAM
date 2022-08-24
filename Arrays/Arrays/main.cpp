//
//  main.cpp
//  Arrays
//
//  Created by Aryan on 7/18/21.
//

#include <iostream>
using namespace std;

void printarray (int array[] , int size){
    for(int y=0 ; y<size ; y++);
}
int main() {
    int bucks[5]={10,25,34,56,76}; // Array counts as (0,1,2,3,4....) It starts counting from zero.
    cout << bucks[4] << endl;
    cout << bucks[0] << endl;
    int vbucks[9];
    cout << "Element - Value" << endl;
    
    for(int x = 0 ; x<=8 ; x++){
        vbucks[x]=99;
        cout << x << " __________ " << vbucks[x] << endl;
    }
    int fries [6] = {23,45,65,62,45,66};
    int sum = 0;
    for (int z=0 ; z<6 ;z++){
        sum += fries[z];
        cout<< sum <<endl;
    }
    int sally [2][3] = {{2,3,4},{5,7,8}};
    // 2,3,4  (0,0) (0,1) (0,2)
    // 5,7,8  (1,0) (1,1) (1,2)
    cout<< sally[0][2] <<endl;
    
    //Printing Array
    
    int kailey[4][4] = {{4,5,6,9},{9,4,3,8},{3,5,7,9},{2,6,9,1}};
    for(int row=0 ; row<4 ; row++){
        for(int column=0 ; column<4 ; column++){
            cout << kailey[row][column] << " ";
        }
        cout <<endl;
    }
    return 0;
}
