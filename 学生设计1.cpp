#include<iostream.h>
#include<stdlib.h>
class student
{
};
class caidan
{
public:
	void denglu()
	{  
		cout<<"            欢迎使用本系统！"<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*           请选择用户类型           *"<<endl;
		cout<<"*             1: 学生                *"<<endl;
		cout<<"*             2: 管理员              *"<<endl;
		cout<<"*             3: 退出                *"<<endl;
        cout<<"**************************************"<<endl;
	}
	void xdenglu()
	{  
		
		cout<<"**************************************"<<endl;
		cout<<"*                                    *"<<endl;
		cout<<"*           请输入您的学号：         *"<<endl;
        cout<<"*                                    *"<<endl;
		cout<<"**************************************"<<endl;
		
		
	}
	void gdenglu()
	{   
		cout<<"**************************************"<<endl;
		cout<<"*                                    *"<<endl;
		cout<<"*           请输入您的密码：         *"<<endl;
        cout<<"*                                    *"<<endl;
		cout<<"**************************************"<<endl;
		
	}
	void xzhucaidan()
	{
	    cout<<"          请选择您需要的服务：        "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*          1: 查询个人成绩           *"<<endl;
		cout<<"*          2: 查询本班所有同学成绩   *"<<endl;
		cout<<"*          3：查询前n名同学成绩      *"<<endl;
		cout<<"*          4: 按名次显示所有同学成绩 *"<<endl;
		cout<<"*          5: 退出                   *"<<endl;
		cout<<"**************************************"<<endl;
	}
	void gcaidan()
	{
		cout<<"          请选择功能菜单              "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*         1: 查询菜单                *"<<endl;
		cout<<"*         2: 修改菜单                *"<<endl;
		cout<<"*         3: 注册新成员              *"<<endl;
		cout<<"*         4: 注销学生                *"<<endl;
		cout<<"*         5: 退出                    *"<<endl;
		cout<<"**************************************"<<endl;
	}
};
bool xshibie(double b)
{  
	bool m=false;
	double xh[5]={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++)
	{
	
		if (b==xh[i])
		{
			cout<<"登陆成功!"<<endl;
            m=true;
			break;
		}
	}		
	return m;     
}
bool gshibie(double b)
{  
	bool m=false;
	double xh[5]={1,2,3,4,5,};
	int i;
	for(i=0;i<5;i++)
	{
		if (b==xh[i])
		{
			cout<<"登陆成功!"<<endl;
            m=true;
			break;
		}

		else
		{
			cout<<"对不起，您输入的密码有误"<<endl;
			m=false;
		} return m  ;     
	}

}
void main()
{   bool m=false;
	double b;
	int a;
	caidan cd1;
    cd1.denglu();
	cin>>a;
	switch (a)
	{
case 1:
	cd1.xdenglu();
	cin>>b;
    m=xshibie(b);
    if(m=true)
	{
		cd1.xzhucaidan();
		cin>>b;
	}
	else cout<<"登陆失败！学号有误！"<<endl;

	break;
case 2:
	cd1.gdenglu();
	cin>>b;
	m=gshibie(b);
	if(m=true)
	{
		cd1.gcaidan();
	}
	else break;
	break;
case 3:break;
	
	}

}