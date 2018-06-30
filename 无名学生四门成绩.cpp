#include<iostream.h>
struct xs
{
	char name[10];
	int c[4];
	int zf;
};
void input(xs s[],int n)
{
	int i,j;
	int zf;
	for(i=0;i<n;i++)
	{
		cout<<"输入学生姓名："<<endl;
		cin>>s[i].name;
		zf=0;
         cout<<"依次输入各课成绩顺序为。。。"<<endl;
		for(j=0;j<4;j++)
		{
			
			cin>>s[i].c[j];
            zf=zf+s[i].c[j];
		}
		s[i].zf=zf;

	}
}
void pj(xs s[],int n,double x[],int m)
{
	int i,j,h=1;
	int sum;
	for(j=0;j<m;j++)
	{
	    sum=0;
		for(i=0;i<n;i++)
		{
			sum=sum+s[i].c[j];
		}
		
		x[j]=sum/n;
	}
}
int zz(xs s[],int n)
{
	int i,j;
	int max=s[0].zf;
	j=0;
	for(i=1;i<n;i++)
	{
		if(s[i].zf>max)
		{
			max=s[i].zf;
			j=i;
		}

	}
    return j;
}
void main()
{
	xs xs[5];
	double v[4];

	input(xs,5);
	pj(xs,5,v,4);
    int j=zz(xs,5);
	cout<<"各科的平均成绩依次为"<<endl;
	for(int i=0;i<4;i++)
	{
	    cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"最高分为："<<endl;
	cout<<xs[j].name<<" "<<xs[j].zf<<endl;
}