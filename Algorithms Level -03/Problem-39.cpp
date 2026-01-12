 #include <iostream>
 #include <string>
 #include <vector> 

  using namespace std; 

  string JoinString(vector<string> vString, string Delim)
  {
      short pos = 0;
      string sWord;

      for (short i = 0; i < vString.size(); i++)
      {
          if (i < vString.size() - 1)
          {
             sWord += vString.at(i) + Delim;

          }
          else
          {
              Word += vString.at(i);
          }
      }
      return Word;
  }

  int main()
  {
      vector<string> vString = { "Mohammed", "Ali", "Fadi", "Maher" };
      cout << "Vector After Join\n";
      cout << JoinString(vString, ", ");

  	system("pause >0");
  } 


// OR
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

 int main()
 {
     vector<string> vString = { "Mohammed", "Ali", "Fadi", "Maher" };

     cout << JoinString(vString, ", ") << endl;

 	system("pause >0");
 } 

