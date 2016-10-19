// oscar elizondo a01192543
#include <iostream>
#include <string.h>

using namespace std;

bool countUniq(string input)
{
  int charArray[26];
  memset(charArray, 0, sizeof(charArray));
  int aux;
  for(int i = 0; i < input.length(); i++)
  {
    if(input[i] != ' ')
    {
      aux = input[i] - 'A';
      charArray[aux]++;
    }
  }

  for(int i = 0; i < 26; i++)
  {
    if(charArray[i] == 1)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  string input;
  getline(cin, input);

  bool uniq = countUniq(input);
  cout << uniq << endl;
  return 0;
}