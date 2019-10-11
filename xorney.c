// TO check if the number is odd or even using bitwise op

#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c;
        scanf("%d %d", &a, &b);
        c = a ^ b;
        if(c & 1)
            printf("Odd\n");
        else
            printf("Even\n");
    }

    return 0;
}
