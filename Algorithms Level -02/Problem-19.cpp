#include <iostream>
#include <string>
#include <stdlib.h> // Srand
#include <ctime> // time
using namespace std;


int RandomNumber(int From, int To)
{
  int RandomNumber = rand() % (To - From + 1) + From;
  return RandomNumber;
}

int main()
{
  srand(unsigned(time(NULL)));
  
  cout << RandomNumber(1, 5) << endl;
  cout << RandomNumber(1, 5) << endl;
  cout << RandomNumber(1, 5) << endl;
  return 0;
}
