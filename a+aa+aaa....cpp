#include<iostream.h>
void main()
{
	 long int sum=0,a;
	int n,i;
	cout<<"����n"<<endl;
	cin>>n;
	cout<<"����a"<<endl;
	cin>>a;
	int x=a;
	sum=a;
	for(i=1;i<n;i++)
	{	
	   	a=a*10+x;
		sum+=a;
         
	}
	cout<<"���ս��Ϊ��"<<sum<<endl;

}