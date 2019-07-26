#include<iostream>
#include<string>
using namespace std;

bool isPresent(int n, string st1, string st2){
    int index = n;
    bool present = false;
    while(index < st1.length()){
        if(st1[n] == st2[index]){ 
            present = true;
            break; }
        
        index++;
    }
    return present;
}

int main(){
    int t, n;
    string s1, s2;
    cin>>t;
    while(t--){
        cin>>n;
        if(n != 0){
        cin>>s1;
        cin>>s2;
        for(int i = 0; i < n; i++){
            int j;

            if(s1[i] == s2[i]){ continue;}
            else{
                if(isPresent(i, s1, s2)){
                    int j = i;
                    while(j <= n){
                        if(s1[i] == s2[j]){
                            char temp = s2[i];
                            s2[i] = s2[j];
                            s2[j] = temp;
                 
                        }
                        j++;
                    }
                        
                }
                else{
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if (s1 == s2){ cout<<"YES"<<endl; }
        }
      }
      else{ continue; }
   }
    return 0;
}
