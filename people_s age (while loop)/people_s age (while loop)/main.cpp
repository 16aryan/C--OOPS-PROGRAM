//
//  main.cpp
//  people's age (while loop)
//
//  Created by Aryan on 7/15/21.
//

#include <iostream>
using namespace std;
int main() {
    int age;
    int agetotal = 0;
    int numberofpeopleentered = 0;
    
    cout << "Enter the age of the first person or -1 to quit" << endl;
    cin >> age;
    while (age!=-1){
        agetotal = agetotal + age;
        numberofpeopleentered++;
        cout << "Enter the age of the first person or -1 to quit" << endl;
        cin >> age;
    }
    cout << "The number of people entered are : " <<numberofpeopleentered << endl;
    cout << "The Average age is : " << agetotal/numberofpeopleentered << endl;
    return 0;
}
