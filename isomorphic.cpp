// Oscar Elizondo A01192543

class Solution {
public:
    bool isIsomorphic(string s, string t) {
     map<char, char> patternMatch;
     map<char, char> patternMatch2;
     
     int patternLength = s.length();

     if(t.length() != patternLength)
        return false;
     
     for(int i = 0; i < patternLength; i++)
     {
         if(patternMatch[s[i]] == NULL && patternMatch2[t[i]] == NULL )
         {
             patternMatch[s[i]] = t[i];
             patternMatch2[t[i]] = s[i];
         }
         else
         {
             if(patternMatch[s[i]] != t[i] && patternMatch2[t[i]] != s[i] )
             {
                 return false;
             }
         }
     }
     return true;
    }
};