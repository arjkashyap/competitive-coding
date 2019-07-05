#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s;
		char a[n];
		char temp;
		strcpy(a, s.c_str());
		if(n%2 == 0){
			for(int i = 0; i < n; i+=2){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		else{
			for(int i = 0; i < n-1; i+=2){
			    temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
		}
		
		for(int i = 0; i < n; i++){
				cout<<a[i]<<endl;
				}
		
			}
	}
	return 0;
}