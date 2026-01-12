 #include <iostream>
 #include <string>
 #include <vector> 

  using namespace std; 

  string ReadString()
  {
      string S1;
      cout << "Please Enter Your String:\n";
      getline(cin, S1);
      return S1;
  }

  vector<string> SpiltString(string S1, string Delim)
  {
      vector<string> vString;

      short pos = 0;
      string Word;

      while ((pos = S1.find(Delim)) != std::string::npos)
      {
          Word = S1.substr(0, pos);

          if (Word != "")
          {
              vString.push_back(Word);
          }

          S1.erase(0, pos + Delim.length());

      }

      if (S1 != "")
      {
          vString.push_back(S1);
      }

      return vString;
  }


  string ReplaceWord(string S1, string Delim, string Word, string Replace)
  {
      vector<string> vS1;
      vS1 = SpiltString(S1, Delim);
      string S2 = "";


      vector<string>::iterator iter = vS1.begin();
      while (iter < vS1.end())
      {

          if (*iter == Word)
          {
              *iter = Replace;
          }

          S2 += *iter + Delim;

          iter++;
      }
      S2.substr(0, S2.length() - Delim.length()); // Remove Last Delim

      return S2;

  }

  int main()
  {

      string S1 = ReadString();

      cout << "\nString After Reverse Words: \n";
      cout << ReplaceWord(S1, " ", "Kareem", "Mohammed") << endl;

  	system("pause >0");
  } 