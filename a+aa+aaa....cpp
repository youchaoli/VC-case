#include<iostream.h>
void main()
{
	 long int sum=0,a;
	int n,i;
	cout<<"输入n"<<endl;
	cin>>n;
	cout<<"输入a"<<endl;
	cin>>a;
	int x=a;
	sum=a;
	for(i=1;i<n;i++)
	{	
	   	a=a*10+x;
		sum+=a;
         
	}
	cout<<"最终结果为："<<sum<<endl;

}