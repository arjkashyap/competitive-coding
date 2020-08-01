#include<bits/stdc++.h>


int main()
{
    std::string str;
    std::cin >> str;
    bool res = true;
    if(std::isupper(str[0])){
        // All are capital 
        bool allUpper = true;
        bool allLower = true;
        
        int l = 1, r = str.length() -1;
        // Check if string has any lower
        while(l <= r){
            if(!std::isupper(str[l]) || !std::isupper(str[r])){
                allUpper = false;
            }

            if(std::isupper(str[l]) || std::isupper(str[r])){
                allLower = false;
            }
            l++;
            r--;
        }
        res = allUpper | allLower;
    }
    else if(std::islower(str[0])){
        int l = 1, r = str.length() - 1;
        while(l <= r){
            if(std::isupper(str[l]) || std::isupper(str[r])){
                res = false;
                break;
            }
            l++;
            r--;
        }

    }
    if(res) std::cout << "True";
    else std::cout << "False";
    std::cout << "\n";
    return 0;
}
