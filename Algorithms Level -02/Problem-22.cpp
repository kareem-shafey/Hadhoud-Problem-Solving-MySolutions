#include <iostream>
#include <string>
using namespace std;

void ReadArray(int Numbers[], int& Length)
{
    cout << "Please Enter Length Array?\n";
    cin >> Length;
    cout << "Enter Array Elements\n";
    for (int i = 1; i <= Length; i++)
    {
        cout << "Elements [" << i << "]: ";
        cin >> Numbers[i];
    }
}

void PrintNumberArray(int Numbers[], int Length)
{
    cout << "\nOriginal array: ";
    for (int g = 1; g <= Length; g++)
    {
        cout << Numbers[g] << " ";
    }
    cout << endl;
}

int CheckArray(int Numbers[], int Length, int CkeckNumber)
{
    int result = 0;

    for (int j = 1; j <= Length; j++)
    {
        if (Numbers[j] == CkeckNumber)
            result++;
    }
    return result;
}

int main()
{
    int NumberArray[100];
    int Length = 0;

    ReadArray(NumberArray, Length);

    int CheckNumber = 0;
    cout << "Please Enter The Number You Want To Check ?\n";
    cin >> CheckNumber;

    PrintNumberArray(NumberArray, Length);


    cout << "Number: " << CheckNumber << " Is repeated " << CheckArray(NumberArray, Length, CheckNumber) << " Time(s)\n";

    return 0;
}

// OR

// #include <iostream>
// #include <string>
// using namespace std;

// int ReadPositiveNumber(string message)
// {
//     int number = 0;
//     do
//     {
//         cout << message << endl;
//         cin >> number;
//     } while (number < 0);
//     return number;
// }

// void ReadArray(int arr[100], int &arrLength)
// {
//     arrLength = ReadPositiveNumber("Please Enter Array Length");

//     cout << "Enter Array Elements ?\n";
//     for(int i = 1; i <= arrLength; i++)
//     {
//         cout << "Elements [" << i << "]: "; 
//         cin >> arr[i];
//     }
// }

// void PrintArray(int arr[100], int arrLength)
// { 
//     cout << "Original Array: ";
//     for(int g = 1; g <= arrLength; g++)
//     {
//         cout << arr[g] << " ";
//     }
//     cout << endl;
// }

// int CheckArray(int Arr[100], int Length, int NumberToCheck)
// {
//     int result = 0;
//     for(int j = 1; j <= Length; j++)
//     {
//         if(Arr[j] == NumberToCheck)
//           result++;
//     }
//     return result;
// }

// int main()
// {
//     int arr[100];
//     int arrLength = 0;
//     ReadArray(arr, arrLength);

//     int NumberToCheck = ReadPositiveNumber("Please Enter The Number You Want To Check ?");

//     PrintArray(arr, arrLength);

//     cout << "Number " << NumberToCheck << " Is repeated " 
//          << CheckArray(arr, arrLength, NumberToCheck) << " Time(s)\n";
    
//     return 0;
// }