#include <iostream>
#include <string>
#include <vector> 
 using namespace std; 

 string ReadString()
 {
     string S1;
     cout << "Please Enter Your String:\n";
     getline(cin, S1);
     return S1;
 }

 vector<string> SpiltString(string S1, string Delim)
 {
     vector<string> vString;

     short pos = 0;
     string Word;

     while ((pos = S1.find(Delim)) != std::string::npos)
     {
         Word = S1.substr(0, pos);

         if (Word != "")
         {
             vString.push_back(Word);
         }

         S1.erase(0, pos + Delim.length());

     }
     
     if (S1 != "")
     {
         vString.push_back(S1);
     }

     return vString;
 }


 string ReverseWord(string S1, string Delim)
 {
     vector<string> vS1;
     vS1 = SpiltString(S1, Delim);
     string S2 = "";

     vector<string>::iterator iter = vS1.end();
     while (iter != vS1.begin())
     {
         iter--;
         S2 += *iter + Delim;
     }
     S2.substr(0, S2.length() - Delim.length()); 

     return S2;

 }

 int main()
 {
   
     string S1 = ReadString();

     cout << "\nString After Reverse Words: \n";
     cout << ReverseWord(S1, " ") << endl;


 	system("pause >0");
 } 


// OR

// #include <iostream>
// #include <string>

//  using namespace std; 

//  string ReadString()
//  {
//      string String;
//      cout << "Please Enter Your String\n";
//      getline(cin, String);
//      return String;
//  }

//  string RerversedWord(string S1)
//  {
//      string Word = "";
        
//      for(short i = S1.length() - 1; i >= 0; i--)
//      {
//          if(S1[i] == ' ')
//          {
//              Word += S1.substr(i + 1, S1.length() - 1) + " ";
//              S1.erase(i, S1.length() - 1);
//          }
//      }

//         if(S1 != "")
//         {
//             Word += S1;
//         }
        
//         return Word;
//  }

//  int main()
//  {
//      string S1 = ReadString();
//      cout << "\nString After Reversing Words:\n";
//      cout << RerversedWord(S1);
//  	system("pause >0");
//  } 