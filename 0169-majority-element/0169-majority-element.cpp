class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), k=0;

        for (int i = 0; i < n; i++)
        { k = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[i] == nums[j])
                k++;
            }
            if (k > n/2)
            {
                return (nums[i]);
            }

        }
        return 0;
    }
};