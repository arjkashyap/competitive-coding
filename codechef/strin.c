#include<stdio.h>
int main(){
	char arr[50];
	scanf("%[^\n]%c", &arr);
	printf("%c", arr[2]);
}