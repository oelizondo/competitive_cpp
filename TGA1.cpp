// oscar elizondo a01192543
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string translate(string word)
{
  int aux;
  string translatedWord = "";

  for(int i = 0; i < word.length(); i++)
  {
    aux = word[i] - 'A';
    aux = abs(aux - 25);
    char newChar = aux + 'A';
    translatedWord += newChar;
  }
  return translatedWord;
}

int main()
{
  string word;
  cin >> word;
  string newWord = translate(word);
  cout << newWord << endl;
  return 0;
}
