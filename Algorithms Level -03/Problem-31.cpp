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

 char InvertLetter(char C)
 {
     return (isupper(C) ? tolower(C) : toupper(C));
 }

 short CountLetter(string S1, char Letter, bool MatchCase = true)
 {
     short Counter = 0;

     for (short i = 0; i < S1.length(); i++)
     {  
         if (MatchCase)
         {
             if (S1[i] == Letter)
                 Counter++;
         }
         else
         {
             if(tolower(S1[i]) == tolower(Letter))
                 Counter++;
         }
     }
     return Counter;
 }

 int main()
 {
     string S1 = ReadString();
     char Ch1 = ReadChar();

     cout << "\nLetter \'" << Ch1 << "\' Count = " << CountLetter(S1, Ch1, true) << "\n";

     cout << "\nLetter \'" << Ch1 << "\' " << "Or";
     cout << " \' " << InvertLetter(Ch1) << " \' ";
     cout << "Count = " << CountLetter(S1, Ch1, false) << "\n";

 	system("pause >0");
 } 