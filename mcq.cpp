
#include<iostream>
#include<string> 
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	string str_cor, str_chef;
	cin>>t;
	while(t--){
		int i = 0, res = 0;
		cin>>n;
		char cor[n], chef[n];
		cin>>str_cor;
		cin>>str_chef;
		strcpy(cor, str_cor.c_str());
		strcpy(chef, str_chef.c_str());
		while(i < n){
			if(cor[i] == chef[i]){
				res += 1;
				i+=1;
			}
			if(chef[i] == 'N'){i+=1;}
			if(cor[i] != chef[i] && chef[i] != 'N'){
				i+= 2;
			}
		}
		cout<<res<<endl;
	}

}	
