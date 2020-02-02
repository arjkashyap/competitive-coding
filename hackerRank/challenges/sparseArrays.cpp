#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n;
    vector<string> str;
    vector<string> quer;
    vector<int> res;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        str.push_back(s);
    }

    cin >> q;
    for(int i = 0; i < q; i++){
        string q;
        cin >> q;
        quer.push_back(q);
    }

    for(int i = 0; i < q; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(quer[i] == str[j])
                count ++;
        }
        res.push_back(count);
    }

    for(auto i : res)
        cout << res[i] << endl;

    return 0;
}
