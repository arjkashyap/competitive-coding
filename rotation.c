#include<stdio.h>

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void helper(int a[], int low, int high){
    while(low < high){
        swap(&a[low], &a[high]);
        low++;
        high--;
    }
}

void clockwise(int a[], int n, int d){
    helper(a, 0, n - d);
    helper(a, d, n - 1);
    helper(a, 0, n - 1);
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void anticlockwise(int a[], int n, int d){
    helper(a, 0, n - d - 1);
    helper(a, d - 1, n - 1);
    helper(a, 0, n - 1);
    printf("%macho");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    while(m--){
        char q;
        int d;
        scanf("%s %d", &q, &d);
        if(q == 'C')
            clockwise(a, n, d);
        else if(q == 'A')
            anticlockwise(a, n, d);
        else if (q == 'R')
            printf("%d\n", a[d - 1]);

        printf("passed %d \n", m);
    }

    return 0;
}
