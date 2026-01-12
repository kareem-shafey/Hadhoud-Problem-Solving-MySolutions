#include <iostream>
#include <string>
#include <vector> 

 using namespace std; 

 string ReadString()
 {
     string S1;
     cout << "Please Enter Your String\n";
     getline(cin, S1);
     return S1;
 }

 vector<string> Spilt(string S1, string delim)
 {
     vector<string> vString;

     short pos = 0;
     string sWord;

     while ((pos = S1.find(delim)) != std::string::npos)
     {
         sWord = S1.substr(0, pos);

         if (sWord != "")
         {
             vString.push_back(sWord);
         }

         S1.erase(0, pos + delim.length());
     }

     if (S1 != "")
     {
         vString.push_back(S1);
     }


     return vString;
 }

 int main()
 {
     string S1 = ReadString();
     vector<string> vString;

     vString = Spilt(S1, " ");

     cout << "\nTokens = " << vString.size() << endl;

     for (string &S : vString)
     {
         cout << S << endl;
     }
 	system("pause >0");
 } 


// My Solution
// #include <iostream>
// #include <string>
// #include <vector> 

//  using namespace std; 

//  string ReadString()
//  {
//      string S1;
//      cout << "Please Enter Your String\n";
//      getline(cin, S1);
//      return S1;
//  }

//  void Spilt(string S1, vector<string>& vString)
//  {
//      string delim = " ";
//      string sWord;
//      short pos = 0;

//      while ((pos = S1.find(delim)) != std::string::npos)
//      {
//          sWord = S1.substr(0, pos);

//          if (sWord != "")
//          {
//              vString.push_back(sWord);
//          }

//          S1.erase(0, pos + delim.length());
//      }

//      if (S1 != "")
//      {
//          vString.push_back(S1);
//      }
//  }

//  void PrintVector(vector<string> &vString) 
//  {
//      cout << "\nVector Content\n";
//      for (string S : vString)
//      {
//          cout << S << endl;
//      }
//  }

//  int main()
//  {
//      string S1 = ReadString();
    
//      vector<string> vString;
//      Spilt(S1, vString);

//      cout << "Tokens = " << vString.size() << endl;

//      PrintVector(vString);
//  	system("pause >0");
//  } 