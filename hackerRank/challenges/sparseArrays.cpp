#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int s, q;
    cin >> s;
    vector<string> str;

    for(int i = 0; i < s; i++)
    {
        string s;
        cin >> s;
        str.push_back(s);
    }
    
    cin >> q;
    vector<string> quer;
    vector<int> res;
    for(int i = 0; i < q; i++)
    {
        int count = 0;
        string qstr;
        cin >> qstr;
        for(int j = 0; j < s; j++){
            if(qstr == str[j])
                count++;
        }
        res.push_back(count);
    }
   for(int i = 0; i < res.size(); i++)
      cout << res[i] << "\n";

    return 0;
}
