#include<iostream>
using namespace std;
int main(){
	int tst, t, index = 0;
	cin>>tst;
	t = tst;
	int result[tst];
	while(tst>0){
		int n, sum, trace = 0;
		cin>>n;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cin>>a[i][j];
		}
		for(int i = 0; i < (n-1); i ++){
			for(int j = 0; j < (n-1); j++){
				sum = a[i][j] + a[i+1][j+1];
				if(sum > trace)
					trace = sum;
			}
		}
		for(int i = 0; i < (n-1); i++){
			for(int j = (n-1); j > 0; j--){
				sum = a[i][j] + a[i+1][j-1];
				if(sum > trace)
					trace = sum;
			}
		}
		result[index] = trace;
	index += 1;
	tst -= 1;	
	}

	for(int i = 0; i<t; i++){
		cout<<result[i]<<endl;
	}
	return 0;
}