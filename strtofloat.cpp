#include <iostream>

using namespace std;

int findPoint(string number)
{
  for(int i = 0; i < number.length(); i++)
    if(number[i] == '.')
      return i;

  return 0;
}

double stringToFloat(string toBeConverted)
{
  float modifier = 1;
  float answer = 0;
  int point = findPoint(toBeConverted);

  for(int i = point-1; i >= 0; i--)
  {
    float digit = toBeConverted[i] - '0';
    answer += (digit * modifier);
    modifier *= 10;
  }
  modifier = 10;
  for(int i = point+1; i < toBeConverted.length(); i++)
  {
    float digit = toBeConverted[i] - '0';
    answer += (digit / modifier);
    modifier = modifier * 10;
  }

  return answer;
}

int main()
{
  string example = "54.32";
  double answer;
  answer = stringToFloat(example);
  cout << answer << endl;
  return 0;
}