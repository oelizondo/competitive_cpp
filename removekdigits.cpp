// Oscar Elizondo A01192543

class Solution {
public:
    string cutZeroes(string res)
    {

        string newStr;
        int len = res.length();
        int i = 0;
        while(res[i] == '0')
        {
            i++;
        }
        newStr = res.substr(i, len - i);
        return newStr;
    }

    void removedigits(string num, int k, string &res)
    {
        if(k==0) {
          res.append(num);
          return;
        }
        
        int length = num.length();
        
        if(length <= k) 
          return;
        
        int min = 0;
        
        for(int i = 1; i <= k; i++)
        {
            if(num[i] < num[min])
            {
                min = i;
            }
        }

        res.push_back(num[min]);
        string cut = num.substr(min+1, length - min);
        
        removedigits(cut, k-min, res);
    }
    string removeKdigits(string num, int k) {
        string res = "";
        
        removedigits(num, k, res);
        string newStr = cutZeroes(res);
        if(newStr == "")
            return "0";
        return newStr;
    }
};