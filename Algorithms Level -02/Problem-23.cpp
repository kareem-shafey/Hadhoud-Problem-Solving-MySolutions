
 #include <iostream>
 #include <string>
 using namespace std;


 int ReadPositiveNumber(string message)
 {
     int number = 0;
     do
     {
         cout << message << endl;
         cin >> number;
     } while (number < 0);
     return number;
 }

 int RandomNumber(int From, int To)
 {
     char RandomNum = rand() % (To- From + 1) + From;
     return RandomNum;
 }

 void GetRandomArray(int arr[100], int &arrLength)
 {
     for(int i = 1; i <= arrLength; i++)
     {
         arr[i] = RandomNumber(1, 100);
     }
  
 }

 void PrintArray(int arr[100])
 {
     GetRandomArray(arr);

     for (int i = 1; i <= arrLength; i++)
     {
         cout << arr[i] << " ";
     }
     cout << endl;
 }
 }
 int main()
 {
     srand((unsigned)time(NULL));
     int arr[100], arrLength;  
     arrLength = ReadPositiveNumber("Please Enter Array Length");
     cout << "Array Elements: ";
     PrintArray(arr, arrLength);

     return 0;
 }