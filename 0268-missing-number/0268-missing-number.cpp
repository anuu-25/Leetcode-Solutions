class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int es=0,as=0;
        for (int i = 0; i <= nums.size(); i++)
        {
            es+=i;
            if (i < nums.size())
            {
            as+=nums[i];
            }
        }
        int m = es-as;
        return m;
    }
};