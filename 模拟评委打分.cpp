#include<iostream.h>
void main()
{
	double a,sum=0,p=0,max=0,min=100;
	int n=0;
	cout<<"请输入第一个分数："<<endl;
	cin>>a;
	while(a!=-1)
	{
    	sum+=a;
		n++;
		if(a>max)
			max=a;
		if(a<min)
			min=a;
	
		cout<<"请输入下一分数(输入-1结束)："<<endl;
		cin>>a;
	}
	p=(sum-max-min)/(n-2);
	cout<<"选手的最后得分为："<<endl<<p<<endl;
	cout<<"最高分为："<<max<<"最低分为："<<min<<endl;
	cout<<"评委总数是："<<n<<endl;

}