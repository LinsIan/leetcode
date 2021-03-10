class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> numsMap;
        for (int i = 0; i < nums.size(); i++)
        {
           numsMap[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int value = target - nums[i];
            if (numsMap.find(value) != numsMap.end() && numsMap[value] != i)
            {
                return vector<int> {i,numsMap[value]};
            }
        }
        throw invalid_argument("There is no answer.");
    }
};，