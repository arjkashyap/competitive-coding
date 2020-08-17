class Solution {
public:
    int firstBadVersion(int n)
    {
        int l = 0, r = n -1;
        while(l <= r)
        {
            int mid = l + (r - l) / 2;
            int api = mid + 1;
            if(isBadVersion(api))
            {
                // first bad version
                if((api > 1 && isBadVersion(api - 1) == false) || (api == 1))
                    return api;
                
                if((api > 1 && isBadVersion(api - 1) == true))
                    r = mid - 1;
            }
            else if(isBadVersion(api) == false)
            {
                l = mid + 1;
            }
        }
        return -1;
    }
};