#include<stdio.h>
#include<stdlib.h>

int Max(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int gls[n], fls[n], res[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &gls[i]);
        for(int i = 0; i < n; i++)
            scanf("%d", &fls[i]);
        for(int i = 0; i < n; i++){
            int a = gls[i]*20 - fls[i] * 10;
            if(a > 0)
                res[i] = a;
            else
                res[i] = 0;
        }
        printf("%d\n", Max(res, n));
    }
}
