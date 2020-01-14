#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n];
	for( int i = 0; i < n; i++ )
		cin >> a[i];
	int max = 0;
	int i = 0; 
	while(i < n-1){
		cout << "a[i]: " << a[i] << "\n";
		int count = 1;
		int global = a[i];
		for(int j = i + 1; j < n; j++){
			int local = a[j];
			if( local % global == 0){
				global = local;
				count++;

			}
			cout << global << "\n";
		}
		if(count > max)
			max = count;
		i++;
	}
	cout << max << "\n";
	return 0;
}
