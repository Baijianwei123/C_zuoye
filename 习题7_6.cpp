#include<iostream.h>
#include"string"
void main()
{
	char a[100],b[100],c[100];
	cout<<"�������ַ���a,b:"<<endl;
	gets(a);
	gets(b);
	int n;
	cout<<"�������ַ���Ҫ����ָ��λ��n��:"<<endl;
	cin>>n;
	int l,s;
	l=strlen(a); 
	s=strlen(b);
    for(int i=0;i<(l-n);i++) 

	{

		c[i]=a[n+i]; 

	}
    for(int j=0;j<(s-n);j++)
	{c[j]=b[j+n];
	}
	for(i=0;a[i]!='\0';i++)

	cout<<a[i];

	cout<<endl;

}