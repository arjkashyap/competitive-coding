#include<bits/stdc++.h>

int main()
{
    std::string s;
    std::cin >> s;
    bool isValid = true;
    int l = 0, r = s.length() - 1;
    while(l <= r){
        // Check if the chars are alnum
       while(!isalnum(s[l])) l++;
       while(!isalnum(s[r])) r--;

       if(s[l] != s[r]){
            isValid = false;
            break;
       }
    
        l++;
        r--;
    }
    if(isValid) std::cout << "True";
    else std::cout << "False";

    std::cout << "\n";
    
    return 0;
}
