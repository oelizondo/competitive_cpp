// Oscar Elizondo A01192543

class Solution {
public:
int lengthOfLIS(vector<int>& nums) {
    vector<int> count(nums.size(),0);
    int max=0;
    for(int i=nums.size()-1;i>=0;i--){
        int t=0;
        for(int j=nums.size()-1;j>i;j--){
            if(nums[j]>nums[i]){
                if(count[j]>t)t=count[j];
            }
        }
        count[i]=t+1;
        if(max<count[i])max=count[i];
    }
    return max;
}
};