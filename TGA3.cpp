// oscar elizondo a01192543

#include <iostream>
#include <string>

using namespace std;

void coutRepetitions(string input)
{

  int contador = 1;
  for(int i = 0; i < input.length(); i++)
  {
    if(input[i] != input[i+1])
    {
      if(contador == 1)
      {
        cout << input[i];
      }
      else
      {
        cout << contador << input[i];
      }
      contador = 1;
    }
    else
    {
      contador++;
    }
  }
  cout << endl;
}

int main()
{
  string input;
  cin >> input;
  coutRepetitions(input);
  return 0;
}