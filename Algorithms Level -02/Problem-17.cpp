#include <iostream>
#include <string>
using namespace std;

string ReadPassword()
{
  string Password = "";
  cout << "Please Enter Password\n";
  cin >> Password;
  return Password; 
}


void GuessPassword(string Password)
{  
  int Counter = 1;
  string word = "";

    for(int i = 65; i <= 90; i++)
    {
      for(int g = 65; g <= 90; g++)
      {
        for(int k = 65; k <= 90; k++)
        {   
              word += char(i);
              word += char(g);
              word += char(k);
             cout << "Trial [" << Counter << "]: " << word << endl;

            if(word == Password)
             {
                cout << endl;
                cout << "Password Is " << word << endl;
                cout << "Found after " << Counter << " Trial(s)\n"; 
                return; 
             }
             Counter++;
             word.clear();
        }
      }
    }

    
}

int main()
{
  GuessPassword(ReadPassword());

  return 0;
}