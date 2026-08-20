class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(),l=0,t=0,c=0;

        for (int i = 0; i < n; i++)
        { 
            if (c == 0)
            {
                l = nums[i];
                c= 1;
            }
            else
            {
                if (l == nums[i])
                c++;
                else
                c--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == l)
            t++;
        }
        if (t > n/2)
        {
            return l;
        }
        return -1;
    }
};