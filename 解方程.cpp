#include<iostream.h>
#include<math.h>
void main() 
{
	double m,x1,x2,a,b,c;
    cout<<"请依次输入方程的系数："<<endl;
	cin>>a>>b>>c;
	m=b*b-4*a*c;
	if(m<0)
	{
	
		cout<<"方程有两个虚根："<<endl;
		cout<<"x1="<<-b/(2*a)<<"+"<<sqrt(-m)<<"i"<<endl;
        cout<<"x2="<<-b/(2*a)<<"-"<<sqrt(-m)<<"i"<<endl;                  
	}
	else 
	{
		if(m==0)
		{
	    	x1=x2=-b/(2*a);
	    	cout<<"方程有两个相等的是跟"<<endl;
	     	cout<<"x1=x2="<<x1<<endl;

		}
    	else
			if(m>0)
		{
	    	x1=(-b+sqrt(m))/(2*a);
	    	x2=(-b-sqrt(m))/(2*a);
	    	cout<<"方程不相等有两个实根："<<endl;
	    	cout<<"x1="<<x1<<endl<<"x2="<<x2<<endl;
		}
	}
}