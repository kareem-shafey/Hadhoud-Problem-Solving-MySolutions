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

string JoinString(vector<string> vString, string Delim)
{
    string S1;

    for (string S : vString)
    {
        S1 = S1 + S + Delim;
    }

    S1.substr(0, S1.length() - Delim.length());

    return S1;
}

string LowerAllString(string S1)
{
    
    for (short i = 0; i < S1.length(); i++)
    {
        S1.at(i) = tolower(S1.at(i));
    }

    return S1;
}

vector<string> SpiltString(string S1, string Delim)
{
    vector<string> vString;
    string sWord;

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

string ReplaceWordInStringUsingSpilt(string S1, string StringToReplace, string sRepalceTo, bool MatchCase = true)
{
    vector<string> vS2;

    vS2 = SpiltString(S1, " ");

    for (string& S : vS2)
    {
        if (MatchCase)
        {
            if (S == StringToReplace)
            {
                S = sRepalceTo;
            }
        } 
        else
        { 
            if (LowerAllString(S) == LowerAllString(StringToReplace))
            {
                S = sRepalceTo;
            }
        }
    }
    return JoinString(vS2, " ");
}

int main()
{

    string S1 = ReadString();
    vector<string> vS1;
    string StringToReplace = "Kareem";
    string sRepalceTo = "Mohammed";

    cout << "\nOrginal String: " << S1 << endl;
    cout << "\n\nString With Match Case: \n";
    cout << ReplaceWordInStringUsingSpilt(S1, StringToReplace, sRepalceTo, true) << endl;
    cout << "\n\nString With don't Match Case: \n";
    cout << ReplaceWordInStringUsingSpilt(S1, StringToReplace, sRepalceTo, false) << endl;

    system("pause >0");
}