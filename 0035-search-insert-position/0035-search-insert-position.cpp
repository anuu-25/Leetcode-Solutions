class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int low = 0, high = nums.size() - 1, mid, c;
        while (high >= low)
        {
            mid = (low+high)/2;
            if (nums[mid] == target)
            {
                c = 0;
                return (mid);
            }

            else if (target < nums[mid])
            {
                high = mid - 1;
            }
            else if (target > nums[mid])
            {
                low = mid+1;
            }
        } 
          return low;
        }
};