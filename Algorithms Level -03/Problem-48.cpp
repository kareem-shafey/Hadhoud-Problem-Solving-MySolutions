#include <iostream>
#include <iomanip>
#include <vector> 
#include <fstream> 

 using namespace std; 

 const string ClientFileName = "Clients.txt"; 

 void LoadDataFromFileToVector(string FileName, vector<string> &vFileContent)
 {
     fstream MyFile;
     MyFile.open(FileName, ios::in);

     if (MyFile.is_open())
     {
         string Line = "";

         while (getline(MyFile, Line))
         {
             vFileContent.push_back(Line);
         }
     }
     MyFile.close();

 }

 vector<string> DeleteSperatorFromVector(vector<string> vFileContent, string Sperator, short Number)
 {
     vector<string> vString;

     string sWord = "";
     short pos = 0;

     while ((pos = (vFileContent[Number].find(Sperator)))  != std::string::npos)
     {
         sWord = vFileContent[Number].substr(0, pos);

         if (sWord != "")
         {
             vString.push_back(sWord);
         }
         vFileContent[Number].erase(0, pos + Sperator.length());
     }

     if (vFileContent[Number] != "")
     {
         vString.push_back(vFileContent[Number]);
     }


     return vString;

 }

 void PrintHeader(vector<string> vS1)
 {
     cout << "\t\t\t Client List (" <<  vS1.size() << ") Client(s)\t\t\n";
     cout << "----------------------------------------------------------------------------------------\n";
     cout << "| Account Number |    PinCode   |      Client Name      |      Phone    |    Balance  \n";
     cout << "----------------------------------------------------------------------------------------\n";

 }

 void PrintResult(vector<string> vString)
 {

     cout << "|" << setw(16) << vString.at(0) << "|" << setw(14) << vString.at(1) << "|" << setw(23)
          << vString.at(2) << "|" << setw(15) << vString.at(3) << "|" << setw(15) << vString.at(4) << "\n";
 }

 void SpiltString(vector<string> &vFileContent, string Sperator)
 {
     
     vector<string> vString;
    
     for (short i = 0; i < vFileContent.size(); i++)
     {

         vString = DeleteSperatorFromVector(vFileContent, Sperator, i);
        
         PrintResult(vString);
     }
 }


 int main()
 {
    vector<string> vString;

    LoadDataFromFileToVector(ClientFileName, vString);
    PrintHeader(vString);
    SpiltString(vString, "#//#");


 	system("pause >0");
 } 


 // OR

//  #include <iostream>
// #include <string>
// #include <iomanip>
// #include <vector> 
// #include <fstream> 

//  using namespace std; 

//  const string ClientFileName = "Clients.txt"; 

//  struct stClients
//  {
//      string AccountNumber;
//      string PinCode;
//      string Name;
//      string Phone;
//      double AccountBalance;
//  };

//  void LoadDataFromFileToVector(string FileName, vector<string> &vFileContent)
//  {
//      fstream MyFile;
//      MyFile.open(FileName, ios::in);

//      if (MyFile.is_open())
//      {
//          string Line = "";

//          while (getline(MyFile, Line))
//          {
//              vFileContent.push_back(Line);
//          }
//      }
//      MyFile.close();

//  }

//  vector<string> DeleteSperatorFromVector(vector<string> vFileContent, string Sperator, short Number)
//  {
//      vector<string> vString;

//      string sWord = "";
//      short pos = 0;

//      while ((pos = (vFileContent[Number].find(Sperator)))  != std::string::npos)
//      {
//          sWord = vFileContent[Number].substr(0, pos);

//          if (sWord != "")
//          {
//              vString.push_back(sWord);
//          }
//          vFileContent[Number].erase(0, pos + Sperator.length());
//      }

//      if (vFileContent[Number] != "")
//      {
//          vString.push_back(vFileContent[Number]);
//      }


//      return vString;

//  }



//  void PrintHeader(vector<string> vS1)
//  {
//      cout << "\t\t\t Client List (" <<  vS1.size() << ") Client(s)\t\t\n";
//      cout << "-------------------------------------------------------------------------------------\n";
//      cout << "| Account Number |    PinCode   |      Client Name      |      Phone    |    Balance  \n";
//      cout << "-------------------------------------------------------------------------------------\n";

//  }

//  stClients AddDataToStruct(vector<string> vString)
//  {
//      stClients Client;

//      Client.AccountNumber = vString.at(0);
//      Client.PinCode = vString.at(1);
//      Client.Name = vString.at(2);
//      Client.Phone = vString.at(3);
//      Client.AccountBalance = stod(vString.at(4));
//      return Client;

//  }

//  void PrintResult(vector<string> vString)
//  {
//      stClients Client = AddDataToStruct(vString);
//      cout << "| " << setw(15) << left << Client.AccountNumber;
//      cout << "| " << setw(13) << left << Client.PinCode;
//      cout << "| " << setw(22) << left << Client.Name;
//      cout << "| " << setw(14) << left << Client.Phone;
//      cout << "| " << setw(14) << left << Client.AccountBalance << "\n";
//  }

//  void SpiltString(vector<string> &vFileContent, string Sperator)
//  {
     
//      vector<string> vString;
    
//      for (short i = 0; i < vFileContent.size(); i++)
//      {

//          vString = DeleteSperatorFromVector(vFileContent, Sperator, i);
        
//          PrintResult(vString);
//      }
//  }


//  int main()
//  {
//     vector<string> vString;

//     LoadDataFromFileToVector(ClientFileName, vString);
//     PrintHeader(vString);
//     SpiltString(vString, "#//#");


//  	system("pause >0");
//  } 