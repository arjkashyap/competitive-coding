#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isVowel(char c){
    if( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
       return true;
   return false; 
}

bool checkTag(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '-') continue;
        if( s[i] >= 'A' && s[i] <= 'Z')
            continue;
        if( isdigit(s[i]) && isdigit(s[i+1])){
            char a = s[i];
            char b = s[i+1];
            int intA = (int)a - (int)48;
            int intB = (int)b - (int)48;
            if((intA + intB)%2 != 0)
                return false;
            
        }
    }
    return true;
}

int main(){
    string tag;
    cin>>tag;
    bool isValid = true;
    isValid = checkTag(tag);
    if(isVowel(tag[2]))
          isValid = false;
    if(isValid)
      cout<<"valid"<<endl;
    else
      cout<<"invalid"<<endl;  
    return 0;

}
