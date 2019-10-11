#include<stdio.h>
#define true 1
#define false 0

int isFair(int a[], int c[]){
    if(a[0] == a[1] && a[1] == a[2] && (c[0] == c[1] && c[1] == c[2]))
        return 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            if(i != j){
                if(a[i] < a[j] && c[i] >= c[j])
                    return 0;
            }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a1, a2, a3, c1, c2, c3;
        scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &c1, &c2, &c3);
        int a[] = {a1, a2, a3};
        int c[] = {c1, c2, c3};
        if( isFair(a, c) )
            printf("FAIR\n");
        else
            printf("NOT FAIR\n");
    }
    
    return 0;
}
