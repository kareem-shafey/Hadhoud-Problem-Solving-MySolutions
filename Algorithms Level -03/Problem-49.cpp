#include <iostream>
#include <string>
#include <iomanip>
#include <vector> 
#include <fstream> 

 using namespace std; 

 struct sClient
 {
     string AccountNumber; 
     string PinCode; 
     string Name; 
     string Phone; 
     double AccountBalance; 
 };

 const string ClientsFileName = "Clients.txt";

 vector<string> SpiltString(string S1, string Delim)
 {
     string sWord;
     short pos = 0;
     vector<string> vString;

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


 sClient ConvertLineToRecord (string S1, string Sperator)
 {
     sClient Client;
     vector<string> vDataClient = SpiltString(S1, Sperator);

     Client.AccountNumber = vDataClient[0];
     Client.PinCode = vDataClient[1];
     Client.Name = vDataClient[2];
     Client.Phone = vDataClient[3];
     Client.AccountBalance = stod(vDataClient[4]);

     return Client;
 }

 vector<sClient> LoadClientDataFromFile(string FileName)
 {
     fstream MyFile;
     MyFile.open(FileName, ios::in);

     vector<sClient> vDataClient;

     sClient Client;

     if (MyFile.is_open())
     {
         string Line;
         while (getline(MyFile, Line))
         {
             Client = ConvertLineToRecord(Line, "#//#");
             vDataClient.push_back(Client);
         }
     }

     return vDataClient;
 }

 void PrintClientRecord(sClient Client) 
 { 
     cout << "\n\nAccount Number : " << Client.AccountNumber << endl;    
     cout << "Pin Code       : " << Client.PinCode << endl;
     cout << "Name           : " << Client.Name << endl;    
     cout << "Phone          : " << Client.Phone << endl;     
     cout << "Account Balance: " << Client.AccountBalance << endl; 
 }

 void PrintAllClientsData(vector<sClient> vClients, string AccountNumber)
 {
     
     for (sClient Client : vClients)
     {
         if (Client.AccountNumber == AccountNumber)
         {
             PrintClientRecord(Client);
             break;
         }

     }   
             cout << "\nClient With Account Number (" << AccountNumber << ") Not Found!\n";
   
 }

 int main() 
 {
     vector<sClient> vDataClients = LoadClientDataFromFile(ClientsFileName);

     string AccountNumber;
     cout << "Please Enter Account Number? ";
     cin >> AccountNumber;

     PrintAllClientsData(vDataClients, AccountNumber);

     system("pause>0");
     return 0; 
 }