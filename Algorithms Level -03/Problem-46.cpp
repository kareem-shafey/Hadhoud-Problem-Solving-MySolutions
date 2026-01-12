#include <iostream>
#include <string>
#include <vector> 
 using namespace std; 

 struct stClient
 {
     string AccountNumber;
     string PinCode;
     string Name;
     string Phone;
     double AccountBalance;
 };

 vector<string> SpiltString(string S1, string Delim)
 {
     vector<string> vString;

     string sWord = "";

     short pos = 0;

     while ((pos = S1.find(Delim)) != std::string::npos)
     {
         sWord = S1.substr(0, pos); 
         if (sWord != "")
         {
             vString.push_back(sWord);
         }

         S1.erase(0, pos + Delim.length());

     }

     if (S1 != "")
     {
         vString.push_back(S1); 
     }

     return vString;
 }

 stClient ConvertLineToRecord(vector<string> vString)
 {
     stClient Client;
     Client.AccountNumber = vString.at(0);
     Client.PinCode = vString.at(1);
     Client.Name = vString.at(2);
     Client.Phone = vString.at(3);
     Client.AccountBalance = stod(vString.at(4));

     return Client;

 }

 void PrintClient(stClient Client)
 {
     cout << "\n\nThe following is the extracted client record:\n"; 
     cout << "\nEnter Account Number?: " << Client.AccountNumber << endl;
     cout << "Enter Pin Code?: " << Client.PinCode << endl;
     cout << "Enter Name?: " << Client.Name << endl;
     cout << "Enter Phone?: " << Client.Phone << endl;
     cout << "Enter Account Balance?: " << Client.AccountBalance << endl;

 }

 int main()
 {

     string ClientRecord = "A150#//#1234#//#Kareem Abd ElHamid#//#01220089129#//#5000.000000";

     cout << "\nLine Record Is: \n";
     cout << ClientRecord << endl;

     stClient Client = ConvertLineToRecord(SpiltString(ClientRecord, "#//#"));


     PrintClient(Client);
 	system("pause >0");
 } 