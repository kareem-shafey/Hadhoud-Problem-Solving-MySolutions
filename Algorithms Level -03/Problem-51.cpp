#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

const string ClientFileName = "MyClient.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
	bool MarkForDelete = false;
};



string ConvertRecordToLine(sClient Client, string Sperator = "#//#")
{
	string Line = "";
	Line = Client.AccountNumber + Sperator;
	Line += Client.PinCode + Sperator;
	Line += Client.Name + Sperator;
	Line += Client.Phone + Sperator;
	Line += to_string(Client.AccountBalance);
	return Line;
}



vector<string> SpiltString(string S1, string Delim = "#//#")
{
	short pos = 0;
	vector<string> vS1;
	string sWord;
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vS1.push_back(sWord);
		}

		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vS1.push_back(S1);
	}
	return vS1;
}

sClient ConvertLineToRecord(string Line, string Sperator = "#//#")
{
	vector<string> vClientData = SpiltString(Line, Sperator);

	sClient Client;
	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);
	return Client;
}

vector<sClient> LoadClientDataFromFile(string FileName)
{
	vector<sClient> vClients;
	fstream MyFile;

	MyFile.open(FileName, ios::in);

	if(MyFile.is_open())
	{
		string Line;
		sClient Client;
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClients.push_back(Client);
		}

	}
	MyFile.close();

	return vClients;
}

void PrintClientCard(sClient Client)
{
	cout << "\nThe following are the client details:\n";
	cout << "\nAccout Number: " << Client.AccountNumber;
	cout << "\nPin Code : " << Client.PinCode;
	cout << "\nName : " << Client.Name;
	cout << "\nPhone : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}

string ReadClientAccountNumber()
{
	string AccountNumber;
	cout << "\nPlease Enter Account Number? ";
	cin >> AccountNumber;
	return AccountNumber;
}

bool FindClientDataByAccountNumber(string AccountNumber, sClient &Client, vector<sClient> vClient)
{
	for (sClient C : vClient)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
			return false;

	}
}
sClient ChangeClientRecord(string AccountNumber)
{
	sClient Client;

	Client.AccountNumber = AccountNumber;
	cout << "Enter PinCode ";
	getline(cin >> ws, Client.PinCode);
	cout << "Enter Name ";
	getline(cin, Client.Name);
	cout << "Enter Phone ";
	getline(cin, Client.Phone);
	cout << "Enter Account Balance ";
	cin >> Client.AccountBalance;
	return Client;

}
vector<sClient> SaveClientDataToFile(string FileName, vector<sClient> vClient)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);
	string DataLine;
	if (MyFile.is_open())
	{
		for (sClient &Client : vClient)
		{
			if (Client.MarkForDelete == false)
			{
				DataLine = ConvertRecordToLine(Client);
				MyFile << DataLine << endl;
			}
		}
		MyFile.close();
	}
	return vClient;
}

bool UpdatedClientDataByAccount(string AccountNumber, vector<sClient> &vClient)
{
	sClient Client;
	char Answer = 'n';

	if (FindClientDataByAccountNumber(AccountNumber, Client, vClient))
	{
		PrintClientCard(Client);
		cout << "\n\nAre you sure you want update this Client? y/n ";
		cin >> Answer;

		if (Answer == 'y' || Answer == 'Y')
		{
			for (sClient& C : vClient)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientRecord(AccountNumber);
					break;
				}
			}
			SaveClientDataToFile(ClientFileName, vClient);

			cout << "\n\nClient Updated Successfully.";
			return true; 
		}

	}
	else
	{
		cout << "\nClient With Account Number (" << AccountNumber << ") Is Not Found!\n";
		return false;
	}
	
}

int main()
{
	vector<sClient> vClient = LoadClientDataFromFile(ClientFileName);
	string AccountNumber = ReadClientAccountNumber();
	UpdatedClientDataByAccount(AccountNumber, vClient);
	system("pause >0");
}