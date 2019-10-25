#include<stdio.h>
int main(){
	int test;
	scanf("%d", &test);
	unsigned int arr[(test)];
	for(int i = 0; i < test; i++){
		scanf("%u", &arr[i]);
	}
	for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
		printf("%u\n", arr[i]);
		
	return 0;
}