#include<iostream.h>
void main()
{
	double a,sum=0,p=0,max=0,min=100;
	int n=0;
	cout<<"�������һ��������"<<endl;
	cin>>a;
	while(a!=-1)
	{
    	sum+=a;
		n++;
		if(a>max)
			max=a;
		if(a<min)
			min=a;
	
		cout<<"��������һ����(����-1����)��"<<endl;
		cin>>a;
	}
	p=(sum-max-min)/(n-2);
	cout<<"ѡ�ֵ����÷�Ϊ��"<<endl<<p<<endl;
	cout<<"��߷�Ϊ��"<<max<<"��ͷ�Ϊ��"<<min<<endl;
	cout<<"��ί�����ǣ�"<<n<<endl;

}