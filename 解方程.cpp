#include<iostream.h>
#include<math.h>
void main() 
{
	double m,x1,x2,a,b,c;
    cout<<"���������뷽�̵�ϵ����"<<endl;
	cin>>a>>b>>c;
	m=b*b-4*a*c;
	if(m<0)
	{
	
		cout<<"���������������"<<endl;
		cout<<"x1="<<-b/(2*a)<<"+"<<sqrt(-m)<<"i"<<endl;
        cout<<"x2="<<-b/(2*a)<<"-"<<sqrt(-m)<<"i"<<endl;                  
	}
	else 
	{
		if(m==0)
		{
	    	x1=x2=-b/(2*a);
	    	cout<<"������������ȵ��Ǹ�"<<endl;
	     	cout<<"x1=x2="<<x1<<endl;

		}
    	else
			if(m>0)
		{
	    	x1=(-b+sqrt(m))/(2*a);
	    	x2=(-b-sqrt(m))/(2*a);
	    	cout<<"���̲����������ʵ����"<<endl;
	    	cout<<"x1="<<x1<<endl<<"x2="<<x2<<endl;
		}
	}
}