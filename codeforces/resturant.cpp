#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        unordered_set<string> s;
        int n = 3;
        int food[n] = {0};
        for(int i = 0; i < n; i++) 
            cin >> food[i];
        int count = 0;
        string meals[] = {"111", "101", "011", "110", "001", "010", "110"};
        int mealLen = 7;
        for(int i = 0; i < mealLen; i++){
            if(food[0] <= 0 && food[1] <= 0 && food[2] <= 0)
                break;
            string dishes = meals[i];
            for(int j = 0; j < 3; j++){
                if(dishes[j] == '1' && food[j] > 0){
                    food[j]--;
                }
            }
            cout << str << endl;
            if(s.find(str) == s.end()){
                s.insert(str);
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
