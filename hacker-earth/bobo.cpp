#include<bits/stdc++.h>
using namespace std;

long int Sum(long int *a, int days){
    long int sum = 0;
    for( int i = 0; i < days; i++ )
        sum += a[i];
    return sum;
}

long int findMax(long int *a, int days){
    int max = 0;
    for( int i = 0; i < days; i++ ){
        if( a[i] > max )
            max = a[i];
    }
    return max;
}

int checkDays(long int *a, int n, int time){
    int i = 0, days = 0;
    int sum = a[0];
    while( i < n ){
        if( sum + a[i+1] <= time )
            sum += a[i+1];
        else{
            sum = a[i+1];
            days++;
        }
        i++;
    }
    return days;
}

long int findMinTime(long int *a, int n, int maxDays){
    int lo = findMax(a, maxDays), hi = Sum(a, maxDays);
    while( lo <= hi ){
        long int mid = lo + ((hi - lo)/2);
        if( checkDays(a, n, mid) == maxDays )
            return mid;
        else if( checkDays(a, n, mid) > maxDays )
            lo = mid + 1;
        else
            hi = mid - 1;
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    long int a[n] = {0};
    for( int i = 0; i < n; i++) scanf("%li", &a[i]);
    printf("%li\n", findMinTime(a, n, m));
    return 0;
}
