# include <iostream>
#include <cstring>
using namespace std;

void getLineAndIgnore(){
    
        string a, d;
   
        int b;
        getline(cin,a);
        cin>>b;
       
        //Ignoring the newline so it isn't consumed by getline
        cin.ignore();
        getline(cin,d);
       
        cout<<a<<endl;
    
        cout << b << endl;
        
        cout << d << endl;
}

