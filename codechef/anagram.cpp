#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void anagram(string str)
{
   int n = str.length();
   int asci[n] = {0};
   for(int i = 0; i < n; i++)
       asci[i] = char(str[i]);
    sort(asci, asci+n, greater <int>());
    for(int i = 0; i < n; i++)
        cout << char(asci[i]);
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        anagram(s);
    }

    return 0;
}
