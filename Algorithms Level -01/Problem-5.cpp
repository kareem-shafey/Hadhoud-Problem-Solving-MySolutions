#include <iostream>
using namespace std;

struct StInfo
{
	int Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};


StInfo ReadNumber()
{
	StInfo Info;
	cout << "Please Enter You Age\n";
	cin >> Info.Age;
	cout << "Do You Has Driver License\n";
	cin >> Info.HasDriverLicense;
	cout << "Do You Has Madation\n";
	cin >> Info.HasRecommendation;
	return Info;
}


bool IsAccepted(StInfo Info)
{
	if (Info.HasRecommendation)
	{
		return true; // OR 1
	}
	else
	{
		return (Info.Age >= 21 && Info.HasDriverLicense);
	}
}


void PrintResult(StInfo Info)
{
	if (IsAccepted(Info))
		cout << "Hired";
	else
		cout << "Rejected";
}

int main()
{
	PrintResult(ReadNumber());
	return 0;
}
