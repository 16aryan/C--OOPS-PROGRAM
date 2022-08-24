//
//  main.cpp
//  test
//
//  Created by Aryan on 8/16/21.
//
#include <iostream>

using namespace std;
namespace ns2{
void displays ();
class geeks{
public:
    void displays();
};
}
void ns::geeks::displays(){
    cout<<"ns::geeks::displays()\n"
}
void ns::displays(){
    cout<<"ns::displays()\n"
}
namespace ns{
    // Only declaring class here
    class geek;
}

// Defining class outside
class ns::geek
{
public:
    void display()
    {
        cout << "ns::geek::display()\n";
    }
};

int main()
{
    char sample[] = "GeeksforGeeks";

    cout << sample << " - A computer science portal for geeks" << endl;
    
    ns::geeks obj;
    ns::displays();
    obj::displays();

    int age;

        cout << "Enter your age:";
        cin >> age;
        cout << "\nYour age is: " << age <<endl;
    cerr << "An error occured" <<endl; //cerr is unbuffered and doesn't store value unlike cout which stores the file for the partcular thing
    clog << "An error occured" <<endl;//here the text is stored in a buffer until it is fully filled and the buffer is not explicitly flushed and it also displays the message on the screen
    
    ns::geek obj;
    obj.display();
    return 0;
}

