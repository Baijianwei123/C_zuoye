#include<iostream.h>
void main()
{
	int n;
	cin>>n;
	while(n!=1)
	{    
		if(n%2==1)
		{	
		   int sum=3*n+1;
           cout<<"3*n+1="<<sum<<endl;
		   n=sum;
		}
	    else
		{  int sam=n/2;
	       cout<<"n/2="<<sam<<endl;	
		   n=sam;
		}
	}
	cout<<"\n"<<endl;
}
		