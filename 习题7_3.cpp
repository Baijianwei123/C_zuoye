#include<iostream.h>
void main()
{
	int a[10],i;
    cout<<"输入10个整数："<<endl;
		cin>>a[i];
	    int*p,*q;
	      p=q=a;
	for(i=1;i<10;i++)
	{
		if(*p>a[i])
		{
			p=&a[i];
		}
	
		if(*q<a[i])
		{
			q=&a[i];
		}
	}

	int t;

	t=*p;

	*p=*q;

	*q=t;

	for(i=0;i<10;i++)

	{

		cout<<a[i]<<"  ";

	}



}