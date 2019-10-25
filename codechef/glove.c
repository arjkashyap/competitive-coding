#include<stdio.h>
int main(){
	int test, total, front, back;
	scanf("%d", &test);
	while(test--){
		int front =0, back = 0;
		scanf("%d", &total);	d// number of fingers
		int fSize[total], gSize[total];
		for(int i =0; i < total; i++)
			scanf("%d", &fSize[i]);
		for(int i =0; i < total; i++)
			scanf("%d", &gSize[i]);
		
		for(int i = 0; i < total; i++){
			if(fSize[i] <= gSize[i])
				front++;
		}
		for(int i = 0; i < total; i++){
			if(fSize[i] <= gSize[total -1 - i])
				back++;
		}
		if(front == total && back == total)
			printf("both\n");
		else if(front == total)
			printf("front\n");
		else if(back == total)
			printf("back\n");
		else
			printf("none\n");
	}
	return(0);
}