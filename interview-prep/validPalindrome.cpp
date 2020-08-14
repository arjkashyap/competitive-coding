class Solution {
public:
    bool isPalindrome(string s) {
        bool isValid = true;
        int l = 0, r = s.length() - 1;
        if(s == " ") return true;
        if(s.length() == 1 && !isalnum(s[0])) return true;
        while(l <= r){
            // Check if the chars are alnum
           while(!isalnum(s[l]) && l <= r) l++;
           while(!isalnum(s[r]) && l <= r) r--;
            if(l > r ) break;
            
           if(tolower(s[l]) != tolower(s[r])){
                isValid = false;
                cout << s[l] << s[r] << endl;
                break;
           }

            l++;
            r--;
        }
        return isValid;
    }
};