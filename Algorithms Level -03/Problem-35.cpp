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

 void PrintEachWordInString(string S1)
 {
    string delim = " "; 

    cout << "\nYour string wrords are: \n\n";
    short pos = 0;
    string sWord; 

    while ((pos = S1.find(delim)) != std::string::npos)
    {
        sWord = S1.substr(0, pos); 

        if (sWord != "")
        {
            cout << sWord << endl;
        }

        S1.erase(0, pos + delim.length()); 
    }

    if (S1 != " ")
    {
        cout << S1 << endl;
    }
 }




// My Solution

// #include <iostream>
// #include <string>
// #include <cctype>

//  using namespace std; 

//  string ReadString()
//  {
//      string S1;
//      cout << "Please Enter a Character?\n";
//      getline(cin, S1);
//      return S1;
//  }

//  void PrintEachWordInString(string S1)
//  {
    
//      cout << "\nYour String Words Are:\n";
//      for (short i = 0; i < S1.length(); i++)
//      {
//          if (S1[i] != ' ')
//              cout << S1[i];
//          else
//              cout << endl;
//              continue;
//      }
//  }

//  int main()
//  {
//      string S1 = ReadString();
     
//      PrintEachWordInString(S1);

//  	system("pause >0");
//  } 


 // My Solution

// #include <iostream>
// #include <string>
// #include <cctype>

//  using namespace std; 


//  string ReadString()
//  {
//      string S1;
//      cout << "Please Enter a Character?\n";
//      getline(cin, S1);
//      return S1;
//  }

//  // Kareem Abd ElHamid
//  void PrintEachWordInString(string S1)
//  {
//      bool Word = true;
    
//      cout << "\nYour String Words Are:\n";

//      for (short i = 0; i < S1.length(); i++)
//      {
//          if (S1[i] != ' ')
//              cout << S1[i];
//          else 
//              cout << endl;

//      }

//  }

//  int main()
//  {
//      string S1 = ReadString();
     
//      PrintEachWordInString(S1);

//  	system("pause >0");
//  } 

