#include <iostream>
#include <string>
#include <vector>
using namespace std; 

 string JoinString(vector<string> vString, string Delim)
 {
     short pos = 0;
     string Word;

     for (string &V : vString)
     {
         Word += V + Delim;
     }
    
     Word = Word.substr(0, Word.length() - Delim.length());

     return Word;
 }

 string JoinString(string arr[4], short arrLength, string Delim)
 {
     string Word;

     for (short i = 0; i < arrLength; i++)
     {
         Word += arr[i] + Delim;
     }

     Word = Word.substr(0, Word.length() - Delim.length());

     return Word;
 }

 int main()
 {
     vector<string> vString = { "Mohammed", "Ali", "Fadi", "Maher" };
     string arr[] = { "Mohammed", "Ali", "Fadi", "Maher" };

     cout << "\nVector After Join\n";
     cout << JoinString(vString, ", ") << endl;
    
     cout << "\nArray After Join\n";
     cout << JoinString(arr, 4,", ") << endl;
 	system("pause >0");
 } 