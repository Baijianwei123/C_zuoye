#include<iostream.h>
#define M 100
#define N 100
int main()
{
int i,j,k,a[N][M];
int a[0][j],a[i][0],max;
int find=0;
cout<<"ÇëÊäÈëÊý×é";
for(i=0;i<N;i++)
for(j=0;j<M;j++)
cin>>a[i][j];
for(i=0;i<N;i++)
{a[0][j]=a[i][0];
a[i][0]=0;
for(j=0;j<M;j++)
if(a[i][j]>a[0][j]£©
{a[0][j]=a[i][j];
max[i][0]=j;
}
find=1;
