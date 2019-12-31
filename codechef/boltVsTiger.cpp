#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while( t-- ){
        float finish, d2b, tA, bS;
        scanf("%d %d %d %d", &finish, &d2b, &tA, &bS);
        float timeBolt = finish / bS;
        float tigerDist = d2b + finish;
        float timeTiger = abs(sqrt(2*(tigerDist / tA))); 
        if(timeBolt < timeTiger)
            printf("Bolt \n");
        else
            printf("Tiger\n");
    }

    return 0;
}
