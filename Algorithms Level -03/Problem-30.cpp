#include <iostream>
#include <string>
#include <cctype>

 using namespace std; 

 string ReadString()
 {
 	string S1;
 	cout << "Please Enter Your String?\n";
 	getline(cin, S1);
 	return S1;
 }

 char ReadChar()
 {
     char Ch1;
     cout << "\n\nPlease Enter a Character?\n";
     cin >> Ch1;
     return Ch1;
 }

 short CountLetter(string S1, char Char1)
 {
     short Counter = 0;
     for (short i = 0; i < S1.length(); i++)
     {
         if (S1.at(i) == Char1)
             Counter++;
     }
     return Counter;
 }

 int main()
 {
     string S1 = ReadString();
     char Ch1 = ReadChar();

     cout << "\nLetter \'" << Ch1 << "\' Count = " << CountLetter(S1, Ch1) << "\n";

 	system("pause >0");
 } 
