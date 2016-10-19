// oscar elizondo a01192543
#include <iostream>
#include <string.h>

using namespace std;

bool checkPermutations(string input, string input2)
{
  int charArray1[26];
  int charArray2[26];
  memset(charArray1, 0, sizeof(charArray1));
  memset(charArray2, 0, sizeof(charArray2));
  int aux;
  if(input == input2)
  {
    return true;
  }
  else
  {
    if(input2.length() == input.length())
    {
      for(int i = 0; i < input.length(); i++)
      {
        aux = input[i] - 'A';
        charArray1[aux]++;

        aux = input2[i] - 'A';
        charArray2[aux]++;
      }
      for(int i = 0; i < 26; i++)
      {
        return charArray1[i] != charArray2[i] ? false : true
      }
    }
    else
    {
      return false;
    }
  }
  return false;
}

int main()
{
  string input;
  string input2;
  cin >> input;
  cin >> input2;
  cout << checkPermutations(input, input2) << endl;
  return 0;
}