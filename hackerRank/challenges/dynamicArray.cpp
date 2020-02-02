#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    vector<vector<int>> seqList(n);
    int lastAnswer = 0;
    while(q--){
        int c, x, y;
        cin >> c >> x >> y;
        if(c == 1){
            int index = ((x^lastAnswer)%n);
            seqList[index].push_back(y);
        }
        else if(c == 2){
            int index = ((x^lastAnswer)%n);
            int size = seqList[index].size();
            lastAnswer = seqList[index][y%size];
            cout << lastAnswer << "\n";     
        }
    }

    return 0;
}
