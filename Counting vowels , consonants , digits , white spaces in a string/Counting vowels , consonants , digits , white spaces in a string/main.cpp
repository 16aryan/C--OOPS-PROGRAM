//
//  main.cpp
//  Counting vowels , consonants , digits , white spaces in a string
//
//  Created by Aryan on 30/12/21.
//

#include <iostream>
using namespace std;
int main() {
    int vowels=0 , consonants=0 , spaces=0 , digits=0;
    char stri[150];
    cout << "\nEnter a string\n";
    cin.getline(stri,150);
    for(int i = 0; stri[i]!='\0'; ++i)
    if(stri[i]=='A'||stri[i]=='E'||stri[i]=='I'||
       stri[i]=='O'||stri[i]=='U'||stri[i]=='a'||stri[i]=='e'||stri[i]=='i'||stri[i]=='o'||stri[i]=='u')
        vowels++;
    else if((stri[i]>='a'&& stri[i]<='z') || (stri[i]>='A'&& stri[i]<='Z'))
                ++consonants;
            else if(stri[i]>='0' && stri[i]<='9')
                ++digits;
            else if (stri[i]==' ')
                ++spaces;

        cout << "Vowels: " << vowels << endl;
        cout << "Consonants: " << consonants << endl;
        cout << "Digits: " << digits << endl;
        cout << "White spaces: " << spaces << endl;

        return 0;
    }

