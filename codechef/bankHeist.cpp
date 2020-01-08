#include<iostream>
using namespace std;

int main()
{
	int n = 8;
	int banks[n] = {0};
	for( int i = 0; i < n; i++ ) scanf("%d", &banks[i]);
	int p;
	scanf("%d", &p);
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += banks[i];
	while(p--){
		int a, b;
		scanf("%d %d", &a, &b);
		sum -= min(banks[a-1], banks[b-1]);
	}
	printf("%d\n", sum);
	return 0;
}
