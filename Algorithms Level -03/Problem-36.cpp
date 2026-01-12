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

 short CountEachWordInString(string S1)
 {
     string delim = " "; 
     short pos = 0;
     short Counter = 0;
     string sWord; 

     while ((pos = S1.find(delim)) != std::string::npos)
     {
         sWord = S1.substr(0, pos); 

         if (sWord != "")
         {
             Counter++;
         }

         S1.erase(0, pos + delim.length());
     }

     if (S1 != " ")
     {
         Counter++;
     }h
     return Counter;
 }

 int main()
 {
     string S1 = ReadString();
     cout << "\nThe Number Of Word In Your String Is: ";
     cout << CountEachWordInString(S1);
 	system("pause >0");
 } 
