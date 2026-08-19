class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int rev, i,l;
        int num = 0, s= 0;
       for ( i = digits.size() - 1; i >= 0; i--)
       {
        if (digits[i] < 9)
        {
            digits[i]++;
            return (digits);
        }
        else if (digits[i] == 9)
        {
            digits[i]= 0;
        }
       } 
     digits.insert(digits.begin(),1);
     return (digits);
    }
};