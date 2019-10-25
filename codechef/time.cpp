#include<iostream>
using namespace std;
int main()
{
int i,j,a[100][100],l,t,largest,m,d[100],s;

//enter the test no.
cin>>t;
while(t--)
{
//enter the size of matrix
cin>>s;

//enter the values of matrix
for(i=0;i<s;i++)
{
	for(j=0;j<s;j++)
    {
	cin>>a[i][j];
	}
}
cout<<a[i][j];

//trace find out k lie
for(i=0;i<s-1;i++)
{
	for(j=0;j-1<s;j++)
	{
	d[m]=a[i][j]+a[i+1][j+1];
	}
}

//trace ki array print karvayi
for(i=0;i<l;i++)
cout<<d[m]<<" ";


//largest find out k lie
if(d[0]>d[1])
{
	largest=d[0];
}
else

{
	largest=d[1];
}
for(i=2;i<m;i++)
{ 
    if(d[i]>largest)
	{
		largest=d[i];
    }
}
cout<<"the larger value of trace is :-  "<<largest<<endl;
}
return 0;
}