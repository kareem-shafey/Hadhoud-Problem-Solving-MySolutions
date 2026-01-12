#include <iostream>
#include <string>
#include <stdlib.h> // Srand
#include <ctime> // time
using namespace std;

enum enLetter 
{Number = 1, SmallCharacter = 2, CapitalCharacter = 3, SpecialCharacter = 4};

char RandomNumber(enLetter charType)
{

   switch(charType)
   {
      case enLetter::CapitalCharacter:
       return rand() % (90 - 65 + 1) - 65;
      case enLetter::SmallCharacter:
       return rand() % (122 - 97 + 1) + 97;
      case enLetter::Number:
       return rand() % (57 - 48 + 1) + 48;
      case enLetter::SpecialCharacter:
       return rand() % (47 - 33 + 1) + 33;   
   }
    return 0;
}

int main()
{
  srand(unsigned(time(NULL)));
  
  cout << RandomNumber(enLetter::Number) << endl;
  cout << RandomNumber(enLetter::SmallCharacter) << endl;
  cout << RandomNumber(enLetter::CapitalCharacter) << endl;
  cout << RandomNumber(enLetter::SpecialCharacter) << endl;

  return 0;
}