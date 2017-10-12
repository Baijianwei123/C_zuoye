#include<iostream.h>
void main()
{
	int a,b,r,s;
	cin>>a>>b;
	r=a%b;
	s=a/b;
	if (r==0)
		cout<<"a/b \n"<<s<<endl;
	else
		cout<<"a/b \n"<<"s="<<s<<" \n"<<"r="<<r<<endl;
}
	    