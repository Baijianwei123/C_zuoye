#include<iostream.h>
void main()
{
int i,s;
for(i=1;i<100;i++)
{
	s=i*i;
	if(s%10==i||s%100==i||s%1000==i)
	{  cout<<i<<" "<<endl;
	}
}
cout<<endl;
}