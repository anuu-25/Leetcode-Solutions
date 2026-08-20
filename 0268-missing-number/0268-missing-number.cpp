class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int  c;
        for (int i = 0; i <= nums.size(); i++)
        {
             c = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                if (nums[j] == i)
                {
                    c++;
                    break;
                }
            }
            if (c==0)
            {
                return i;
            }
        }
        return -1;
    }
};