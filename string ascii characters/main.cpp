#include<iostream>
#include<string>
using namespace std;

int main()
{
    string upTxt;
    
    cout << "\nPlease Enter the String to Convert into Lowercase  =  ";
    getline(cin, upTxt);
    
    for (int i = 0; i < upTxt.length(); i++)
      {
          if(upTxt[i] >= 65 && upTxt[i] <= 90)
          {
              upTxt[i] = upTxt[i] + 32;
        }
      }
      
    cout<< "\nThe Given String in Lowercase = " << upTxt;
        
     return 0;
}
