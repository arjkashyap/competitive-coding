#include<stdio.h>
int main(){
    int t, n;
    scanf("%d", &t);
    int a[t];
    for(int i = 0; i < t; i++)
        scanf("%d", &a[i]);
    scanf("%d", &n);
    while(n--){
        int num, count = 0;
        scanf("%d", &num);
        for(int i = 0; i < t; i++){
            if( a[i] == num )
                count++;
        }
        if(count)
            printf("%d\n", count);
        else
            printf("NOT PRESENT\n");
    }
    return 0; 
}
