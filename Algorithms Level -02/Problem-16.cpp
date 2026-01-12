#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintWordsFromAAAtoZZZ()
{
  for(char i = 65; i <= 90; i++)
  {
    for(char g = 65; g <= 90; g++)
    {
      for(char j = 65; j <= 90; j++)
      {
         cout << i << g << j << endl;
      }
    }
  }
}

int main()
{
   PrintWordsFromAAAtoZZZ();
  return 0;
}