// Oscar Elizondo A01192543

class Solution {
public:
    vector<string> split(string sentence)
    {
        vector<string> words;
        string newStr = "";
        for(int i = 0; i < sentence.length(); i++)
        {
            if(sentence[i] != ' ')
            {
                newStr += sentence[i];
            }
            else if(sentence[i] == ' ')
            {
                words.push_back(newStr);
                newStr = "";
            }
        }

        words.push_back(newStr);
        return words;
    }

    bool wordPattern(string pattern, string str) {
     map<char, string> patternMatch;
     map<string, char> patternMatch2;
     
     int patternLength = pattern.length();

     vector<string> splitWords = split(str);

     if(splitWords.size() != patternLength)
        return false;
     
     for(int i = 0; i < patternLength; i++)
     {
         if(patternMatch[pattern[i]] == "" && patternMatch2[splitWords[i]] == NULL )
         {
             patternMatch[pattern[i]] = splitWords[i];
             patternMatch2[splitWords[i]] = pattern[i];
         }
         else
         {
             if(patternMatch[pattern[i]] != splitWords[i] && patternMatch2[splitWords[i]] != pattern[i] )
             {
                 return false;
             }
         }
     }
     return true;
    }
};