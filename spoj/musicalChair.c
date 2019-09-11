#include<stdio.h>
#include<stdlib.h>

int calcWinner(int n, int d){
    if ( n == 1 )
        return n;
    return ((calcWinner(n -1, d) + d -1 )%n + 1);
}

int main(){
    int n, d;
    while(1){
    scanf("%d %d", &n, &d);
    if ( n && d )
        printf("%d %d %d\n", n, d, calcWinner(n, d));
    else
        break;
    }
    return 0;
}
