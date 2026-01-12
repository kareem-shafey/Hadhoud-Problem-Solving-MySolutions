#include <iostream>
#include <string>
 using namespace std; 

 struct stClient
 {
     string AccountNumber;
     string PinCode;
     string Name;
     string Phone;
     double AccountBalance;
 };

 stClient ReadNewClient()
 {
     stClient Client;

     cout << "Enter Account Number? ";
     getline(cin, Client.AccountNumber);
     cout << "Enter Pin Code? ";
     getline(cin, Client.PinCode);
     cout << "Enter Name? ";
     getline(cin, Client.Name);
     cout << "Enter Phone? ";
     getline(cin, Client.Phone);
     cout << "Enter Account Balance? ";
     cin >> Client.AccountBalance;

     return Client;
 }

 string ConvertRecordToLine(stClient Client, string Sperator = "#//#") 
 {
     string stClientRecord = "";

     stClientRecord = Client.AccountNumber + Sperator;
     stClientRecord += Client.PinCode + Sperator;
     stClientRecord += Client.Name + Sperator;
     stClientRecord += Client.Phone + Sperator;
     stClientRecord += to_string(Client.AccountBalance);

     return stClientRecord;
 }

 int main()
 {
     cout << "Please Enter Client Data\n\n";
     stClient Client;
     Client = ReadNewClient();

     cout << "\nClient Record For Saving Is: \n";
     cout << ConvertRecordToLine(Client);
 	system("pause >0");
 } 

