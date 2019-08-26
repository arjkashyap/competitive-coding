#include<bits/stdc++.h>
#include<string>

using namespace std;

class Solution{
    public:
        int count = 0;
        int numJewelsInStones(string S, string J){
            for(int i = 0; i < S.length(); i++){
                for(int j = 0; j < J.length(); j++){
                    if(J[j] == S[i])
                        count++;
                }
            }
            return count;
        }
};

int main(){
    Solution S;
    string a, b;
    cin>>a>>b;
    cout<<S.numJewelsInStones(a, b)<<endl;
    return 0;
}
