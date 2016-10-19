class Solution {
public:
    bool isVocal(char letter)
    {
      return letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A'
      || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U';
    }

    string reverse(string vocals)
    {
      string reversed = "";
      for(int i = vocals.length()-1; i >= 0; i--)
        reversed += vocals[i];
      return reversed;
    }

    string reverseVowels(string s) {
      string vocals = "";
      string reversedString = "";
      string reversedVocals;
      int usedLetter = 0;

      for(int i = 0; i < s.length(); i++)
        if(isVocal(s[i]))
          vocals += s[i];

      reversedVocals = reverse(vocals);

      for(int i = 0; i < s.length(); i++)
      {
        if(isVocal(s[i]))
        {
          s[i] = reversedVocals[usedLetter];
          usedLetter++;
        }
        reversedString += s[i];
      }

      return reversedString;
    }
};
