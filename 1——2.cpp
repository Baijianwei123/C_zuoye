#include<iostream.h>
void main()
{
	int m,n;
	cout<<"please input m:"<<endl;
	cin>>m;
if(m<10)
n=1;
else
if(m<=99)
n=2;
else
if(m<=999)
n=3; 
else
n=4;
	switch(n)
	{
	case 1:cout<<"<10\n";break;
	case 2:cout<<"10 to 99\n";break;
	case 3:cout<<"100 to 999\n";break;
	case 4:cout<<">1000\n";break;
	   }
}

