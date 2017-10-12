#include<iostream.h>
#define PI 3.14
void main()
{
int k;
double r,L,S;
cout<<"ÊäÈër,k:";
cin>>r>>k;
switch(k)
{
case 1:S=PI*r*r;
	cout<<S<<endl;break;
case 2:L=2*PI*r;
	cout<<L<<endl;break;
case 3:L=2*PI*r;S=PI*r*r;
	cout<<L<<S<<endl;break;
	
}
}
