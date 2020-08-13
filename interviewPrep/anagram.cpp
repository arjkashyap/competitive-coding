// given two strings find the anagram

#include<iostream>

int main()
{
    int t;
    std::cin >> t;
    while(t--){
        std::string s1, s2;
        std::cin >> s1;
        std::cin >> s2;
        int arr[26] = {0};
        for(int i = 0; i < s1.length(); i++)
            arr[s1[i] - 97]++;

        for(int i = 0; i < s2.length(); i++)
            arr[s2[i] - 96]--;

        for(int i = 0; i < 26; i++)
            if(arr[i])
                return false;
        return true;
    }

    return 0;
}
