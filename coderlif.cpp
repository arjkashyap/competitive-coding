#include<iostream>
using namespace std;
int main(){
	int tst;
	cin>>tst;
	while(tst--){
		int days[30], count = 0;
		bool extends = false;
		for(int i = 0; i < 30; i++){
			cin>>days[i];
		}
		for(int i = 0; i < 30; i ++){
			if(days[i]==1){
				count += 1;
			}
			if(days[i]==0){
				count = 0;
			}
			if(count > 5){
				extends = true;
				break;
			}
		}
		if(extends == true)
			cout<<"#coderlifematters"<<endl;
		else
			cout<<"#allcodersarefun"<<endl;
	}
	return 0;
}