 #include <iostream>
 #include <string>
 using namespace std;
 string ReadText()
 {
     string Name;
     cout << "Please Enter Text\n";
     cin >> Name;
     return Name;
 }
 void Encryption(string &Text, short EncryptionKey)
 {
     for (int i = 0; i <= Text.length(); i++)
     {
         Text[i] += EncryptionKey;
         cout << Text[i] << " ";
     }
     cout << endl;
 }
 void Decryption(string &Text, short DecryptionKey)
 {
     for (int g = 0; g <= Text.length(); g++)
     {
         Text[g] -= DecryptionKey;
         cout << Text[g] << " ";
     }
     cout << endl;
 }
 int main()
 {
     string Text = ReadText();
     short Key = 0;
     cout << "Please Enter Key\n";
     cin >> Key;
    Encryption(Text, Key);
    Decryption(Text, Key);
     return 0;
 }



// OR

// #include <iostream>
// #include <string>
// using namespace std;

// string ReadText()
// {
//     string Text;
//     cout << "Please Enter Text\n";
//     getline(cin, Text);
//     return Text;
// }

// string Encryption(string Text, short EncryptionKey)
// {
//     for (int i = 0; i <= Text.length(); i++)
//     {
//         Text[i] += EncryptionKey; // Or => Text[i] = char((int)Text[i] + EncryptionKey);
//     }
//     return Text;
// }

// string Decryption(string Text, short DecryptionKey)
// {
//     for (int g = 0; g <= Text.length(); g++)
//     {
//         Text[g] -= DecryptionKey;  // Or => Text[i] = char((int)Text[i] - EncryptionKey);
//     }
//     return Text;
// }

// int main()
// {
//   const short Key = 2; // This Is The Key

//   string Text = ReadText();
//   string TextAfterEncryption = Encryption(Text, Key); 
//   string TextAfterDecryption = Decryption(TextAfterEncryption, Key);

//   cout << "\nText Before Encryption: " << Text << endl;
//   cout << "Text After Encryption:  " << TextAfterEncryption << endl;
//   cout << "Text After Decryption:  " << TextAfterDecryption << endl;
//     return 0;
// }