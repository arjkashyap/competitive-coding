#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int main(){
    char ip[MAX];
    fgets(ip, MAX, stdin);
    int i = 0;
    while(ip[i] != '\0'){
        if(ip[i] == '.')
            printf("[.]");       
        else
            printf("%c", ip[i]);
        i++;
    }    
}
