#include<stdio.h>
void main()
{
	int i,k=0;
	for( i=2000;i<=3000;i++)
	{if(i%400==0||(i%4==0&&i%100!=0))
		{	k++;
	        printf("%5d",i);
	if(k%10==0)
		printf("/n");
	}
	}

	printf("×ÜÄêÊý %d",k);
}