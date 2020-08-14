#include<bits/stdc++.h>

int main()
{
    std::unordered_set<int> s;
    int n;
    std::cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++) std::cin >> a[i];
    int pairCount = 0;

    for(int i = 0; i < n; i++){
        int sock = a[i];
        if(s.find(sock) != s.end()){
            pairCount++;
            s.erase(sock);
        }
        else{
            s.insert(sock);
        }
    }
    std::cout << pairCount << std::endl;
    return 0;
}