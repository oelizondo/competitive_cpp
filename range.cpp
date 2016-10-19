// Oscar Elizondo A01192543

class NumArray {
public:
    NumArray(vector<int> &nums) {
        int sum = 0;
        this->nums = nums;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            this->nums2.push_back(sum);
        }
    }

    int sumRange(int i, int j) {
        if(j == i)
        {
            cout << this->nums[j] << endl;
            return this->nums[j];
        }
        else if (i == 0)
        {
            return this->nums2[j];
        }
        else
        {
             return this->nums2[j] - this->nums2[i - 1];
        }
        
        return 0;
    }

private:
    vector<int> nums;
    vector<int> nums2;
};