#include<stdio.h>
#define true 1
#define false 0
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, c;
        scanf("%d %d", &n, &c);
        int st[n];
        printf("%d\n", n);
        for(int i = 0; i < n; i++){
            scanf("%d", &st[i]);
            }

       printf("it reached here"); 
        for(int i = 0; i < n-1; i++){
            int iMin = i;
            for(int j = i+1; j < n; j++){
                if( st[j] <= st[iMin])
                    iMin = j;
            }
            int temp = st[i];
            st[i] = st[iMin];
            st[iMin] = temp;
        }
        int start = 0, end = st[n] - st[0];
        int max = 0;
        while( start <= end ){
            int mid = (start + mid)/2;
            int cow = 0;
            int fit = false;
            for(int i = 0; i < n-1; i++){
                if( (st[i+1] - st[i]) >= mid)
                    cow += 1;
                if ( cow == c ){
                    max = mid;
                    fit = true;
                    break;
                }
            }
            if ( fit )
                start = mid + 1;
            else
                end = mid - 1;
        }
        printf("%d", max);
    }
    return 0;
}
