
#include<iostream.h>
void main()
{
int n;
cout<<"Please input n"<<endl;
cin>>n;
if(n<10)
  cout<<"<10"<<endl;
else 
{  if(n<=99)
        cout<<"10 to 99"<<endl;
else 
{  if(n<=999)
        cout<<n<<"100 to 999"<<endl;
else
     cout<<n<<" >1000"<<endl;
}
}
}
 
