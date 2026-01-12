#include <iostream>
#include <string>
 using namespace std; 

 string ReadString()
 {
     string S1;
     cout << "Please Enter Your String\n";
     getline(cin, S1);
     return S1;
 }


 string TrimLeft(string S1, char Delim = ' ')
 {
     string Word;
     bool Again = true;

     for (short i = 0; i < S1.length(); i++)
     {
         if (S1[i] == Delim && Again)
         {
             continue;
         }
         else
         {
             Again = false;
         }

         Word += S1[i];
     }
     return Word;
 }



 string TrimRight(string S1, char Delim = ' ')
 {
     string Word;
     bool Again = true;
         
     for (short i = S1.length(); i >= 0; i--)
     {   
         
         if (S1[i] == Delim && Again)
         {
             continue;
         }
         else
         {
             Again = false;
         }

         Word += S1[S1.length() - i];
     }
     return Word;
 }

 string Trim(string S1, char Delim = ' ')
 {
     string Word;
     Word = TrimLeft(S1, Delim);
     Word = TrimRight(Word, Delim);
     return Word;
 }

 int main()
 {
     string S1 = ReadString();

     cout << "\nString       = " << S1 << endl;
     cout << "Trim Left  = " << TrimLeft(S1, ' ') << endl;
     cout << "Trim Right = " << TrimRight(S1, ' ') << endl;
     cout << "Trim       = " << Trim(S1, ' ') << endl;
     
 	system("pause >0");
 } 