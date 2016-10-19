//Oscar Elizondo A01192543

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string, int> identifier;
        vector<string> repeatedSequences;
        
        if(s.length() < 10)
            return repeatedSequences;

        for(int i = 0; i <= s.length() - 10; i++)
        {
            string subSequence = s.substr(i, 10);
            
            if(identifier[subSequence] == 0)
            {
                identifier[subSequence]++;
            }
            else if(identifier[subSequence] == 1)
            {
                repeatedSequences.push_back(subSequence);
                identifier[subSequence]++;
            }
            
        }
        return repeatedSequences;
    }
};