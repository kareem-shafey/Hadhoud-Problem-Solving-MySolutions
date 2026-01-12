 #include <iostream>
 #include <string>
 using namespace std;

 int RandomNumber(int From, int To)
 {
   char RandomNum = rand() % (To - From + 1) + From;
   return RandomNum;
 }

 void FillArrayWithRandomNumber(int arr[100], int &arrLength)
 {
     cout << "Enter Array Length\n";
     cin >> arrLength;

     for(int i = 0; i < arrLength; i++)
     {
         arr[i] = RandomNumber(1, 100);
     }
 }

 void PrintArray(int arr[100], int arrLength)
 {
     for(int i = 0; i < arrLength; i++)
     {
         cout << arr[i] << " ";
     }
     cout << endl;
 }

 void CopyArray(int arr[100], int arrLength, int ArrCopy[100])
 {
     for(int i = 0; i < arrLength; i++)
     {
         ArrCopy[i] = arr[i];
     }
     cout << endl;
 }

 int main()
 { 
     srand((unsigned)time(NULL));

     int arr[100], ArrCopy[100], arrLength;
    
     FillArrayWithRandomNumber(arr, arrLength);
    
     CopyArray(arr, arrLength, ArrCopy);

     cout << "Array 1 Elements: \n";
     PrintArray(arr, arrLength);

     cout << "\nArray 2 Elements after Copy: \n";    
     PrintArray(ArrCopy, arrLength);
     return 0;
 }