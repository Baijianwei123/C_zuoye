#include<iostream.h>
void main()
{
	int a[10],i,j;
    cout<<"输入10个整数："<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];
	int*p,*q;
	p=a;
	q=&a[9];
	int t;
	while(p<q)
	{
	    t=*p;
	    *p=*q;
	    *q=t;
		p++;
		q--;
	}
    for(i=0;i<10;i++)
	cout<<"反序输出为：";
	cout<<a[i]<<" ";
	
}