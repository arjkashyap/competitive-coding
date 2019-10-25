#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0

int pickedUp = false;    // picked up a stack
int c_pos = 0;          // position of crane

int main(){
    int n, h;
    scanf("%d %d", &n, &h);
    int a[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    while(true){
        int move;
        scanf("%d", &move);
        if( move ){
           if( move == 1 && c_pos > 0)
               c_pos--;
            else if( move == 2 && c_pos < n-1 )
                c_pos++;
            else if( move == 3 && !(pickedUp) && a[c_pos] > 0){
                pickedUp = true;
                a[c_pos]--;
            }
           else if( move == 4 && pickedUp && a[c_pos] < h ){
                a[c_pos]++;
                pickedUp = false;
                
           }
        }
        else{
            for(int i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
            break;
         }

    }
    return 0;
}
