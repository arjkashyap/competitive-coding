#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int tst;
	cin>>tst;
	while(tst--){
		string str;
		cin>>str;
		int count = 0, n = str.length();
		char a[n];
		strcpy(a, str.c_str());
		a[n] = a[0];
		for(int i = 0; i < n; i++){
			if(a[i] != a[i+1])
				count += 1;
		}
		if(count > 2)
			cout<<"non-uniform"<<endl;
		else
			cout<<"uniform"<<endl;
	}
}