class Solution {
public:
    int binarySearch(vector<int>& numbers, int target, int i)
    {
      int middle = numbers.size() / 2;
      int low = i;
      int high = numbers.size();

      while (low <= high)
      {
        middle = (high + low) / 2;
        if(target == numbers[middle])
          return middle;
        else if(target < numbers[middle]) {
          high = middle - 1;
        }
        else if(numbers[middle] < target) {
          low = middle + 1;
        }
        
      }
      return -1;
    }

    vector<int> twoSum(vector<int>& numbers, int target)
    {
      vector<int> indices;
      for(int i = 0; i < numbers.size(); i++)
      {
        int segment = target - numbers[i];
        int aux = binarySearch(numbers, segment, i + 1);
        if(aux != -1)
        {
          indices.push_back(i + 1);
          indices.push_back(aux + 1);
          break;
        }
      }
      return indices; 
    }
};