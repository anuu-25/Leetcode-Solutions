class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int es=0,as=0,n;
        n=nums.size();
        for (int i = 0; i <= n; i++)
        {
            es+=i;
            if (i < n)
            {
            as+=nums[i];
            }
        }
        int m = es-as;
        return m;
    }
};