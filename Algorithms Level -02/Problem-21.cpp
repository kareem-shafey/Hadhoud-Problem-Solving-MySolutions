 #include <iostream>
 #include <stdlib.h>
 #include <time.h>
 #include <string>
 using namespace std;

 enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialLetter = 3, Digit = 4};
 int RandomNumber(int From , int To)
 {
   char RandomNum = rand() % (To - From + 1) + From;
   return RandomNum;
 }
 int ReadPositiveKey(string message)
 {
   int Key = 0;
   do
   {
     cout << message << endl;;
      cin >> Key;
   } while (Key < 0); 
   return Key;
 }
 char GetRandomCharacter(enCharType CharType)
 {
     switch(CharType)
     {
       case enCharType::SmallLetter:
         return RandomNumber(97, 122);
       case enCharType::CapitalLetter:
         return RandomNumber(65, 90);
       case enCharType::SpecialLetter:
         return RandomNumber(33, 47);
       case enCharType::Digit:
         return RandomNumber(48, 57);      
     }
     return 0;
 }
 string Sperator(int S)
 {
   if(S < 10)
     return " : ";
    else 
      return ": ";  
 }
 string GetCharacterLetter(enCharType ChooseCharacter)
 {
   string CharacterWord = "";
    for(int i = 1; i <= 4; i++)
    {
      for(int g = 1; g <= 4; g++) 
      {
          CharacterWord += char(GetRandomCharacter(ChooseCharacter));
      }
          if(i < 4)
           CharacterWord += '-';
          else 
            continue;
    }
       return CharacterWord;
 }
 void GenerateKey(int Key)
 {
   for(int i = 1; i <= Key; i++)
   {
     cout << "Key [" << i << "]" << Sperator(i) << GetCharacterLetter(enCharType::CapitalLetter) << endl;
   }
 }
 int main()
 {
   srand((unsigned)time(NULL));
   GenerateKey(ReadPositiveKey("Please Enter Generate Key:?"));
   return 0;
 }