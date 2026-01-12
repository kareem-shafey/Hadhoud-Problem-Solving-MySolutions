#include <iostream>
#include <string>
#include <fstream> 

 using namespace std; 

 struct stClient
 {
     string AccountNumber;
     string PinCode;
     string Name;
     string Phone;
     double AccountBalance;
 };


 stClient ReadData()
 {
     stClient Client;

     cout << "Enter Account Number? ";
     cin.ignore(1, '\n');
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

 string ConvertRecordToLine(stClient Client, string Sperator)
 {
     string stClientRecord = "";

     stClientRecord = Client.AccountNumber + Sperator;
     stClientRecord += Client.PinCode + Sperator;
     stClientRecord += Client.Name + Sperator;
     stClientRecord += Client.Phone + Sperator;
     stClientRecord += to_string(Client.AccountBalance);
    
     return stClientRecord;
 }

 void PrintRecordInFile(string FileName)
 {
     fstream MyFile;
     MyFile.open(FileName, ios::out | ios::app);

     char Again = 'Y';
     while (Again == 'Y' || Again == 'y')
     {
         system("cls");

         stClient Client = ReadData();
         string Line = ConvertRecordToLine(Client, "#//#");
    

         if (MyFile.is_open())
         {

             MyFile << Line << endl;

         }

               MyFile.close();
         cout << "\nClient Added Successfully, Do you want to add more clients? ";
         cin >> Again;

         
     }

 }

 int main()
 {

     PrintRecordInFile("FileInC++.txt");
 	system("pause >0");
 } 