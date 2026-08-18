#include<stdio.h>
void sortColors(int* nums, int numsSize);
void sortColors(int* nums, int numsSize) {
    int i, low = 0, mid = 0, high = numsSize - 1, t;
    while (mid <= high)
    {
        if (nums[mid] == 1)
        mid++;
        else if (nums[mid] == 0)
        {
            t = nums[mid];
            nums[mid] = nums[low];
            nums[low] = t;
            mid++;
            low++;
        }
        else if (nums[mid] == 2)
        {
            t =  nums[high];
            nums[high] = nums[mid];
            nums[mid] = t;
            high--;
        }
    }
}
int myleetcodetesting ()
{
    int n;
    scanf("%d", &n);
    int nums[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&nums[i]);
    }
    sortColors(nums, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}