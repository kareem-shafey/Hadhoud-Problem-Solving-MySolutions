#include <iostream>
#include <string>
#include <cctype> 

 using namespace std; 

 char ReadChar()
 {
     char Ch1;
     cout << "Please Enter a Character?\n";
     cin >> Ch1;
     return Ch1;
 }

 bool IsVowels(char arr[], short Length, char Letter)
 {
     Letter = tolower(Letter);
     for (short i = 0; i < Length; i++)
     {
         if (arr[i] == Letter)
             return true;
     }
     return false;
 }

 int main()
 {
     char arr[5] = { 'a', 'e', 'i', 'o', 'u' };
     char Char1 = ReadChar();

     if (IsVowels(arr, 5, Char1))
         cout << "\nYes Letter \'" << Char1 << "\' Is Vowel\n";
     else 
         cout << "\nNo Letter \'" << Char1 << "\' Is Not Vowel\n";


 	system("pause >0");
 } 