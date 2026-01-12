#include <iostream>
#include <string>
#include <vector> 

using namespace std;


string ReadString()
{
    string S1;
    cout << "Please Enter Your String:\n";
    getline(cin, S1);
    return S1;
}

bool itsPunctuation(char p)
{
    return (p == ',' || p == ';' || p == '-' || p == '.' || p == '!' || p == '(' || p == ')' || p == '"' || p == '?' || p == '~' || p == '\'');
}


string RemovePunctuationInString(string S1)
{
    string S2;
    for (short i = 0; i < S1.length(); i++)
    {
        if (itsPunctuation(S1[i]))
        {
            continue;
        }
        else
        {
            S2 += S1[i];
        }
    }
    return S2;
}

int main()
{
    string S1 = ReadString();

    cout << "\nOrginal String: \n" << S1 << endl;

    cout << "\nPunstations Remove: \n" << RemovePunctuationInString(S1) << endl;
  

    system("pause >0");
}