#include <iostream>
#include <vector>
#include <string>
#include <fstream>  
using namespace std;

const string MyFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
	bool MarkForDelete = false; 
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

sClient ConvertLineToRecord(string Line, string Sperator = "#//#")
{
	vector<string> vString = SpiltString(Line, Sperator);
	sClient Client;

	Client.AccountNumber = vString[0];
	Client.PinCode = vString[1];
	Client.Name = vString[2];
	Client.Phone = vString[3];
	Client.AccountBalance = stod(vString[4]);

	return Client;

}

vector<sClient> LoadClientsDataFromFile(string FileName)
{
	fstream MyFile;
	vector<sClient> vClients;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string Line;
		sClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line, "#//#");
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}

bool FindClientByAccountNumber(vector<sClient> vClients, string AccountNumber, sClient& Client)
{
	for (sClient& C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

void PrintDataClient(sClient Client)
{
	cout << "\nAccount Number : " << Client.AccountNumber << endl;
	cout << "Pin Code       : " << Client.PinCode << endl;
	cout << "Name           : " << Client.Name << endl;
	cout << "Phone          : " << Client.Phone << endl;
	cout << "Account Balance: " << Client.AccountBalance << endl;
}

string ReadClientAccountNumber()
{
	string AccountNumber;
	cout << "Please Enter Your Account Number ? ";
	cin >> AccountNumber;
	return AccountNumber;
}

string ConvertRecordToLine(sClient Client, string Sperator)
{
	string DataLine;
	DataLine += Client.AccountNumber + Sperator;
	DataLine += Client.PinCode + Sperator;
	DataLine += Client.Name + Sperator;
	DataLine += Client.Phone + Sperator;
	DataLine += Client.AccountBalance;
	return DataLine;

}

bool MarkClientForDeleteByAccountNumber(vector<sClient> &vClients, string AccountNumber)
{
	for (sClient& C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return true;
		}
	}
	return false;
}

vector<sClient> SaveClientsDataToFile(vector<sClient>& vClients, string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out); 
	string DataLine;

	if (MyFile.is_open())
	{
		for (sClient C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(C, "#//#");
				MyFile << DataLine << endl;
			}
		}
		MyFile.close();
	}
	return vClients;
}

void DeleteClientByAccountNumber(vector<sClient> &vClient, string AccountNumber)
{
	sClient Client;

	char Answer = 'N';
	if (FindClientByAccountNumber(vClient, AccountNumber, Client))
	{
		PrintDataClient(Client);

		cout << "\nAre you sure you want delete this client [Y/N]? ";
		cin >> Answer;

		if (Answer == 'Y' || Answer == 'y')
		{
			MarkClientForDeleteByAccountNumber(vClient, AccountNumber);
			SaveClientsDataToFile(vClient, MyFileName);

			vClient = LoadClientsDataFromFile(MyFileName);
			cout << "\nClient Deleted Sccessfully\n";
		}
	}
	else
	{
		cout << "\nClient With Account Number (" << AccountNumber << ") Not Found!\n";
	}
}

int main()
{
	vector<sClient> vClients = LoadClientsDataFromFile(MyFileName);
	string AccountNumber = ReadClientAccountNumber();
	DeleteClientByAccountNumber(vClients, AccountNumber);

	system("pause >0");
}