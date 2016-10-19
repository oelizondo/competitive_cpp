#include <iostream>

using namespace std;

int main()
{
  string in1, in2, container = "", reverse = "";
  int cont1 = 0, cont2 = 0;
  cin >> in1 >> in2;
  int iA = in1.length() - 1;
  int iB = in2.length() - 1;
  cont1 += (in1[iA] - '0' + in2[iB] - '0');
  iA--;
  iB--;
  cont2 += cont1 / 2;
  cont1 = cont1 % 2;
  container += cont1 + '0';
  while(cont2 != 0 || iA >= 0 || iB >= 0)
  {
    cont1 = cont2;
    cont2 = 0;
    if(iA >= 0)
    {
      cont1 += in1[iA] - '0';
      iA--;
    }
    if(iB >= 0)
    {
      cont1 += in2[iB] - '0';
      iB--;
    }
    cont2 += cont1 / 2;
    cont1 = cont1 % 2;
    container += cont1 + '0';
  }

  for(int i = container.length() - 1; i >= 0; i--)
  {
    reverse += container[i];
  }
  cout << reverse << endl;
  return 0;
}