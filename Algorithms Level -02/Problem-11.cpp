#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPalindromeNotPalindrome {Palindrome = 1, NotPalindrome = 2};

int ReadPositiveNumber(string message)
{
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int ReverseNumber(int Number)
{
	int Remainder = 0, Sum = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Sum = Sum * 10 + Remainder;

	}
	return Sum;
}

enPalindromeNotPalindrome CheckPalindromeOrNot(int Number) 
{
	string N = to_string(Number);
	for (int i = 0; i < N.length(); i++)
	{
		if (N[i] == N[(N.length() - 1) - i])
			return enPalindromeNotPalindrome::Palindrome;
	}
			return enPalindromeNotPalindrome::NotPalindrome;
}

void PrintPalindromeNoTPalindrome(int N)
{
	if (CheckPalindromeOrNot(N) == enPalindromeNotPalindrome::Palindrome)
		cout << "Yes, It Is a Palindrome Number";
	else
		cout << "No, It Is a Not Palindrome Number";
}

int main()
{
	PrintPalindromeNoTPalindrome(ReverseNumber(ReadPositiveNumber("Please Enter Positive Number")));

	return 0;
}


// OR

// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int ReadPositiveNumber(string message)
// {
// 	int Number = 0;
// 	do
// 	{
// 		cout << message << endl;
// 		cin >> Number;
// 	} while (Number <= 0);
// 	return Number;
// }

// int Reverse(int Number)
// {
// 	int Remainder = 0, Sum = 0;

// 	while (Number > 0)
// 	{
// 		Remainder = Number % 10;
// 		Number /= 10;
// 		Sum = Sum * 10 + Remainder;

// 	}
// 	return Sum;
// }

// bool IsPalindromeNotPalidrome(int Number)
// {
// 	return Number == Reverse(Number);
// }

// void PrintPalindromeNotPalindrome(int Number)
// {
// 	if (IsPalindromeNotPalidrome(Number))
// 		cout << "Yes, It Is a Palindrome Number";
// 	else
// 		cout << "No, It Is Not a Not Palindrome Number";
// }

// int main()
// {
// 	PrintPalindromeNotPalindrome(ReadPositiveNumber("Please Enter Positive Number"));
// 	return 0;
// }



// OR

// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int ReadPositiveNumber(string message)
// {
// 	int Number = 0;
// 	do
// 	{
// 		cout << message << endl;
// 		cin >> Number;
// 	} while (Number <= 0);
// 	return Number;
// }

// int Reverse(int Number)
// {
// 	int Remainder = 0, Sum = 0;

// 	while (Number > 0)
// 	{
// 		Remainder = Number % 10;
// 		Number /= 10;
// 		Sum = Sum * 10 + Remainder;

// 	}
// 	return Sum;
// }

// void PrintPalindromeNoTPalindrome(int Number)
// {
//   if(Number == Reverse(Number))
//      cout << "Yes, It Is a Palindrome Number";
//   else 
//      cout << "No, It Is Not a Not Palindrome Number";      
// }


// int main()
// {
// 	PrintPalindromeNoTPalindrome(ReadPositiveNumber("Please Enter Positive Number"));
		

// 	return 0;
// }
