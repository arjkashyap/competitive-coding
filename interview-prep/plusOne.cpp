class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n = digits.size();
        int i = n -1;
        if(digits[i] == 9)
        {
            while(digits[i] == 9)
            {
                digits[i] = 0;
                i--;
                if(i < 0)
                {
                    digits.insert(digits.begin(), 1);
                    break;
                }
            }
            if(i >= 0)
            {
                digits[i]++;
            }
        }
        else
        {
            digits[i]++;
        }
    
        return digits;
    }
};