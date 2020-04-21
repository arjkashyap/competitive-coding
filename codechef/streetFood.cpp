#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][3];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < 3; j++)
				cin >> a[i][j];
		
		int maxProfit = 0;
		for(int i = 0; i < n; i++){
			int s = a[i][0] + 1, v = a[i][1], p = a[i][2];
			if( s > v )
				continue;
			else if( p % s == 0 )
				maxProfit = max( maxProfit, ((p/s) * v) );
		}
		cout << maxProfit << "\n";
	}
	return 0;
}


















