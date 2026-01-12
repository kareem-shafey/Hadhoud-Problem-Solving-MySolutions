#include <iostream>
#include <string>
#include <cctype>

using namespace std; 

enum enWhatToCount {CapitalLetter = 1, SmallLetter = 2};

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

enWhatToCount GetLetter(char C)
{
	if (isupper(C))
		return enWhatToCount::CapitalLetter;
	else
		return enWhatToCount::SmallLetter;

}

short CountCapitalLetter(string S1)
{
	short CountCapital = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] == ' ')
			continue;
		if (GetLetter(S1[i]) == enWhatToCount::CapitalLetter)
			CountCapital++;
	}
	return CountCapital;
}

short CountSmallLetter(string S1)
{
	short CountSmall = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] == ' ')
			continue;
		if (GetLetter(S1[i]) == enWhatToCount::SmallLetter)
			CountSmall++;
	}
	return CountSmall;
}


int main()
{
	string S1 = ReadString();

	cout << "\nString Length = " << S1.length() << endl;

	cout << "Capital Letters Count = " << CountCapitalLetter(S1) << endl;

	cout << "Small Letters Count = " << CountSmallLetter(S1) << endl;
	system("pause >0");
} 


// OR

// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std; 

// string ReadString()
// {
// 	string S1;
// 	cout << "Please Enter Your String?\n";
// 	getline(cin, S1);
// 	return S1;
// }

// short CountCapitalLetter(string S1)
// {
// 	short Count = 0;

// 	for (short i = 0; i < S1.length(); i++)
// 	{
// 		if (isupper(S1.at(i)))
// 			Count++;

// 	}
// 	return Count;
// }

// short CountSmallLetter(string S1)
// {
// 	short Count = 0;

// 	for (short i = 0; i < S1.length(); i++)
// 	{
// 		if (islower(S1.at(i)))
// 			Count++;

// 	}
// 	return Count;
// }

// int main()
// {

// 	string S1 = ReadString();

// 	cout << "\nString Length = " << S1.length() << endl;

// 	cout << "Capital Letters Count = " << CountCapitalLetter(S1) << endl;
// 	cout << "Small Letters Count = " << CountSmallLetter(S1) << endl;

// 	system("pause >0");
// } 