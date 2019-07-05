#include<stdio.h>
int main(){
double a,b;
char c;
scanf("%lf %lf %c",&a,&b,&c);
if(c=='+'){
 
 
printf("%lf\n",a+b);
}else if(c=='-')
{
 
printf("%lf\n",a-b);
}else if(c=='*')
{
printf("%lf\n",a*b);
}else if(c=='/')
{
printf("%lf\n",a/b);
}
}