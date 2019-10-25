#include<iostream>
using namespace std;
int main(){
	int tst;
	cin>>tst;
	while(tst--){
		int r;
		cin>>r;
		int a[r], b[r], aSum =0, bSum = 0, aPos, bPos;
		int aGrt, bGrt;
		for(int i =0; i < tst; i++)
			cin>>a[i];
		for(int i =0; i < tst; i++)
			cin>>b[i];
		 aGrt = a[0];
		 bGrt = b[0];
		 for(int i = 1; i < r; i++){
			 if(aGrt < a[i]){
				 aGrt = a[i];
				aPos = i;
			 }
		 }
		 for(int i = 1; i < r; i++){
			 if(bGrt < b[i]){
				bGrt = b[i];
				bPos = i;
			}
		}
		
		for(int i = aPos; i < r; i++){
			a[i] = a[i + 1];
		}
		for(int i = bPos; i < r; i++){
			b[i] = b[i + 1];
		}
		
		for(int i = 0; i < r-1; i++){
			aSum += a[i];
			bSum += b[i];
		}
		
		if(aSum > bSum)
			cout<<"Alice\n";
		if(aSum < bSum)
			cout<<"Bob\n";
		else
			cout<<"Draw";
	}
	
	return 0;
}