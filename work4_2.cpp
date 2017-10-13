#include<iostream.h>
void main()
{
	int i,k=0,leap;
	for( i=2000;i<=3000;i++)
	{
		leap=1;
		{
			if(i%400==0||(i%4==0&&i%100!=0))
	          leap=1;
	        else
		      leap=0;
		}
			
		if(leap)
			{
			     cout<<"\t"<<i;
	             k++;
	             if(k%10==0)
		         cout<<endl;
			}
	}
	if(k%10!=0)
		cout<<endl;
		
	cout<<"×ÜÄêÊý:"<<k<<endl;
}