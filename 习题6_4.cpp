#include<iostream.h>
#define n 20
void main()
{
	int f[n],i;
	if(n==1||n==0)
		f[n]=1;
	else
f[i]=f[i-1]+f[i-2];
for(i=0;i<n;i++)
{
cout<<f[i]<<" "<<endl;
}
}