#include <iostream>
#include <cctype>

using namespace std; 

char ReadCharacter()
{
	char Character;
	cout << "Please Enter a Character" << endl;
	cin >> Character;
	return Character;
}

char InvertCharacter(char C)
{
	cout << "\nChar after inverting case:\n";
	if (isupper(C))
		return tolower(C);
	else
		return toupper(C);
}

int main()
{
	cout << InvertCharacter(ReadCharacter());

	system("pause >0");
} 