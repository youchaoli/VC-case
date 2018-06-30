#include<iostream.h>
void main()
{
	int i,s,j;
	cout<<"2-20000间的所有完数为："<<endl;
	for(i=6;i<20000;i++)
	{
		s=0;
		for(j=1;j<i;i++)
		{
			if(i%j==0)
			    s=s+j;
		}
	    if(s==i)
		  cout<<" "<<i;
	}
}