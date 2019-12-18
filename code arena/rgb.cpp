#include<bits/stdc++.h>
using namespace std;

void Display(int *a, int n){
    for( int i = 0; i < n; i++ ) printf("%d ", a[i]);
    printf("\n");
}

void InputRGB(int *a, int interval, int time){
    for(int i = interval; i < time; i+= interval){
        int index = 0;
        while(index < interval){
            a[i] = 1;
            i++;
            index++;
        }
    }
}

int main(){
    int t, r, g, b;
    scanf("%d %d %d %d", &t, &r, &g, &b);
    int red[t] = {0}, green[t] = {0}, blue[t] = {0};
    InputRGB(red, r, t);
    InputRGB(green, g, t);
    InputRGB(blue, b, t);
    int R = 0, G = 0, B = 0, Y = 0, C = 0, M = 0, W = 0, Black = 0;
    for( int i = 0; i < t; i++ ){
        if( red[i] == 0 && blue[i] == 0 && green[i] == 0 )
            Black += 1;
        else if( red[i] == 1 && green[i] == 0 && blue[i] == 0)
            R++;
        else if(red[i] == 0 && green[i] == 1 && blue[i] == 0)
            G++;
        else if(red[i] == 0 && green[i] == 0 && blue[i] == 1)
            B++;
        else if(red[i] == 1 && green[i] == 1 && blue[i] == 0)
            Y++;
        else if(red[i] == 0 && green[i] == 1 && blue[i] == 1)
            C++;
        else if(red[i] == 1 && green[i] == 0 && blue[i] == 1)
            M++;
        else if( red[i] == 1 && green[i] == 1&& blue[i] == 1 )
            W++;
    }
    
    printf("%d %d %d %d %d %d %d %d\n", R, G, B, Y, C, M, W, Black);
}
