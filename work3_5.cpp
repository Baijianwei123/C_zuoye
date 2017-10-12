#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,p,s;
	cin>>a>>b>>c;
	if(a>=b+c||b>=a+c||c>=a+b)
		cout<<"无法构成三角形!\n"<<endl;
		else
	{p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<s<<endl;
	}

}