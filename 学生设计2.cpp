#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
struct Student
{
   char name[10];
   double xh[10];
	int cj[3];
	int zf;
	int order;
	double pj;
};
class student
{
public:
    	studen();
	void display(student a);//显示指定学生。
    void show();
	void add();
	int select(int);//按姓名查找形参为1表示纯查找，为0表示修改删除使用的查找。
	void select2();//按学号进行查找；
	void content();
	void update();
	void Delete();
	void findnumber();
	void setorder();
	struct student st[500];
	int s;//记录学生人数的变量


};
class guliyuan
{
public:
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
		cout<<"*         5:   退出                  *"<<endl;
		cout<<"**************************************"<<endl;
	}
	void gchaxun()
	{
		cout<<"           请选择功能菜单             "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*          1: 按姓名查询             *"<<endl;
		cout<<"*          2: 按学号查询             *"<<endl;
		cout<<"*          3: 按名次查询             *"<<endl;
		cout<<"*          4: 显示所有               *"<<endl;
		cout<<"*          5: 显示及格同学成绩       *"<<endl;
		cout<<"*          6: 显示不及格同学成绩     *"<<endl;
		cout<<"*          7: 显示前n名同学成绩      *"<<endl;
		cout<<"*          7: 显示前n名同学成绩      *"<<endl;
        cout<<"*          9:    退出                *"<<endl;
		cout<<"**************************************"<<endl;
	}
};
bool xshibie(double b)
{  
	bool m=false;
	double xh[100];
	int i;
    ifstream fin("xuehao.txt");
	for(i=0;i<100;i++)
	{
		fin>>xh[i];
	}
	fin.close();
	for(i=0;i<100;i++)
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
	double mima;
	int i;
	ifstream fin("mima.txt");
	fin>>mima;
    fin.close();
		if (b==mima)
		{
			cout<<"登陆成功!"<<endl;
            m=true;
		
		}	
	
     	return m  ;     
 
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
    if(m==true)
	{
		cd1.xzhucaidan();
		cin>>a;
		switch(a)
		{
		case 1:{break;}
		case 2:{break;}
		case 3:{break;}
		case 4:{break;}
		case 5: break;		
		}
	}
	else cout<<"登陆失败！学号有误！"<<endl;

	break;
case 2:
	cd1.gdenglu();
	cin>>b;
	m=gshibie(b);
	if(m==true)
	{
		cd1.gcaidan();
		cin>>a;
	switch (a)
	{
	case 1:
		{
		cd1.gchaxun();
		cin>>a;
        switch (a)
		{
		case 1:{break;}
		case 2:{break;}
		case 3:{break;}
		case 4:{break;}
		case 5:{break;}
		case 6:{break;}
		case 7:{break;}
		case 8:{break;}
		case 9:{break;}
		}
		}
	case 2:{break;}
	case 3:{break;}
	case 4:{break;}
	case 5:{break;}
	}
		
	}
	else cout<<"登陆失败！密码有误！"<<endl;break;
	break;
case 3:break;
	
	}

}