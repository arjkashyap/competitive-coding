#include<iostream>
#include<string>
using namespace std;

int main(){
    int t = 0;
    cin>>t;
    string s1, s2;
    while(t--){
        cin>>s1>>s2;
        int countF = 0;
        for(int i = 0; i< s1.length(); i++){
            for(int j = 0; j < s2.length(); j++){
                if(s1[i] == s2[j]){
                   countF++;
                   int temp = j;
                   while(temp < s2.length()){
                        s2[temp] = s2[temp+1];
                        temp++;
                   }
                   break;     
                    }
            }
        }
        int total = s1.length() + s2.length();
         cout<<total - (2*countF)<<endl;
    }
    return 0;
}
