#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t --){
        int n;
        scanf("%d", &n);
        int a[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = i ^ j;
            }
        }
        int max = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if( a[i][j] > max )
                    max = a[i][j];
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if( a[i][j] == max )
                    count++;
            }
        }
        printf("%d %d\n", max, count);
    }
    
    return 0;
}
