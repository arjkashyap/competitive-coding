#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int maxLead = 0, pl = 0;
    while(n--){
        int s1, s2;
        cin >> s1 >> s2;
        if(s1 > s2 && (s1 - s2 > maxLead)){
            pl = 1;
            maxLead = s1 - s2;
        }
        else if(s1 < s2 && (s2 - s1 > maxLead)){
            pl = 2;
            maxLead = s2 - s1;
        }
    }
    cout << pl << " " << maxLead << "\n";
    return 0;
}
