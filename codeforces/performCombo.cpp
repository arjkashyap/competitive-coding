#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        unordered_map<char, int> map;
        int m, n;
        cin >> m >> n;
        char moves[m];
        int miss[n];
        for(int i = 0; i < m; i++) 
            cin >> moves[i];
        for(int i = 0; i < n; i++)
            cin >> miss[i];
        for(int i = 97; i < 123; i++){
            char c = char(i);
            map[c] = 0;
        }
        for(int i = 0; i < n; i++){
            int limit = miss[i];
            for(int i = 0; i < limit; i++){
                map[moves[i]] ++;
            }
        }
        for(int i = 0; i < m; i++)
            map[moves[i]] ++;
        for(int i = 97; i < 123; i++)
            cout << map[char(i)] << " ";
        cout << endl;
    }
    return 0;
}
