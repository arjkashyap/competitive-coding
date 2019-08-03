#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string s, res;
    res = "";
    cin>>s;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i]))
                res += tolower(s[i]);
        if(islower(s[i]))
            res += toupper(s[i]);
    }
    cout<<res<<endl;
    return 0;
}
