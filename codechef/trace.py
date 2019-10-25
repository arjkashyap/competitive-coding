#include<iostream>
using namespace std;
int main(){
	int tst;
	cin>>tst;
	while(tst--){
		int n, sum1, sum2, trace1 = 0, trace2 =0;
		cin>>n;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				a[i][j];
		}
		
		for(int i = 0; i < (n-1); i ++){
			for(int j = 0; j < (n-1); j++){
				sum1 = a[i][j] + a[i+1][j+1];
				if(sum1 > trace1)
					trace1 = sum1;
			}
		}
		
		for(int i = 0; i < (n-1); i++){
			for(int j = (n-1); j > 0; j--){
				sum2 = a[i][j] + a[i+1][j-1];
				if(sum2 > trace2)
					trace2 = sum2;
			}
		}
		
		if(trace1 > trace2)
			cout<<trace1<<endl;
		else
			cout<<trace2<<endl;
		
	}
	return 0;
}