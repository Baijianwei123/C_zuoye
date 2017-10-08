#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,p,s;
	scanf("%f%f%f",&a,&b,&c);
	if(a>=b+c||b>=a+c||c>=a+b)
		printf("无法构成三角形!\n");
		else
	{p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("s=%m\n",s);
	}
	return;
}