 #include <iostream>
 #include <time.h> 
 using namespace std;

 int ReadNumber()
 {
     int number = 0;
     cout << "\nPlease Enter Array Elements: ?" << endl;
     cin >> number;
     return number;
 }

 int RandomNumber(int From, int To)
 {
     char RandomNum = rand() % (To - From + 1) + From;
     return RandomNum;
 }

 void FillArrayWithRandomNumber(int arr[100], int &arrLength)
 {
   cout << "Enter Array Length\n";
   cin>> arrLength;

     for(int i = 0 ; i < arrLength; i++)
     {
         arr[i] = RandomNumber(1, 100);
     }
 }

 void PrintArray(int arr[100], int arrLength)
 {
     for(int i = 0;  i < arrLength; i++)
       cout << arr[i] << " ";
     cout << endl;  
 }


 bool IsNumberInArray(int arr[100], int arrLength, int Number)
 {
   for(int i = 0 ; i < arrLength; i++)
   {
     if(arr[i] == Number)
     {
       return true;
     }
   }
     return false;
 }

 int main()
 {
     srand((unsigned)time(NULL));

     int arr[100], arrLength;

     FillArrayWithRandomNumber(arr, arrLength);
     cout << "\nArray 1 Elements:\n";
     PrintArray(arr, arrLength);
    
     int Number = ReadNumber();
     cout << "\nNumber You Are Looking For Is: " << Number << "\n";
    

     if(!IsNumberInArray(arr, arrLength, Number))
       cout << "No, The Number Is Not Found : -(\n";
     else 
       cout << "Yes, The Number Is Found : -)\n";
      
     return 0;
 }


