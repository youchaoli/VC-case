#include<iostream.h>
#include<stdlib.h>
#include<fstream.h>
#include<iomanip.h>
#include<string.h>
#include<conio.h>
struct Student
{
   char name[10];
   double xh;
	int cj[3];
	int zf;
	int order;
	double pj;
};
class guliyuan
{
public:
};
class student
{
public:
    	student();
	void display(Student a);//显示指定学生。
    void show();
	void add();
	int select(int);//按姓名查找形参为1表示纯查找，为0表示修改删除使用的查找。
	void select2();//按学号进行查找；
	void content();
	void update();
	void Delete();
	void findnumber();
	void setorder();
	struct Student st[100];
	int s;//记录学生人数的变量
};
student::student(){s=0;}
void student::add()
{
	int  i,n;
	char c[10];
	double xh;
	int d[4];
	int e,f;
	ofstream fo,fo1;
	fo.open("学生信息文件.txt");
	fo1.open("xuehao.txt");
	fo <<setw(10)<<"姓名"
	   <<setw(10)<<"学号"
    	<<setw(10)<<"成绩1"
		<<setw(10)<<"成绩2"
		<<setw(10)<<"成绩3"
		<<setw(10)<<"成绩4"
		<<setw(10)<<"总分"
		<<setw(10)<<"名次\n";

    cout<<"请输入您这次要添加的学生人数："<<endl;

	cin>>n;
    for(i=s;i<n+s;i++)
	{	int  j;
		cout<<"请输入第"<<i+1<<"个学生信息"<<endl;
		cout<<"输入学生姓名："<<endl;
		cin>>c;
		cout<<"输入学生学号："<<endl;
        cin>>xh;
        cout<<"依次输入学生各科成绩顺序为高数、英语、vc++"<<endl;
	     e=0;
    	for(j=0;j<3;j++)
		{
			cin>>d[j];
        	e=e+d[j];
		}
		
		f=e/3;
		strcpy(st[i].name,c);
		st[i].xh=xh;
    	for(j=0;j<3;j++)
		{
			st[i].cj[j]=d[j];
        
		}
		
	 //   st[i].cj=d;
		st[i].zf=e;
		st[i].pj=f;
	}
	s=s+n; 
	
	for(i=0;i<s;i++)
	{   
		st[i].order=1;
		for(int j=0;j<s;j++)
		{
			if(st[j].zf>st[i].zf)
				st[i].order+=1;
		}
		fo <<setw(8)<<st[i].name
	   <<setw(10)<<st[i].xh
    	<<setw(10)<<st[i].cj[0]
		<<setw(10)<<st[i].cj[1]
		<<setw(10)<<st[i].cj[2]
		<<setw(10)<<st[i].cj[3]
		<<setw(10)<<st[i].zf
		<<setw(10)<<st[i].order<<"\n";
	    fo1<<" "<<st[i].xh;
	}
	fo.close;
	fo1.close;
	cout<<"所有学生添加完毕。"<<endl;
}
void student::select2()
{
	int i,j=0 ;
	Student b,c[100];
    /*ifstream fi("学生信息文件.txt");
    for(i=0;i<100;i++)
	{
		fi>>c[i].name;
		fi>>c[i].xh;
		for(j=0;j<3;j++)
			fi>>c[i].cj[j];
		fi>>c[i].order;
		cout<<c[i].name;
	}
     fi.close;*/
	cout<<"请输入要查找的学生学号："<<endl;
	cin>>b.xh;

	for(i=0;i<s;i++)
	{
		/*if(c[i].xh==b.xh)
		{
			display(c[i]);
				j=i;
				
		}*/
		if(st[i].xh==b.xh)
		{
			display(st[i]);
			j=i;
			break;

		}
	}
	if(j==0)
		cout<<"您所要查询的学生学号不存在。"<<endl;
        cout<<"按任意键返回。"<<endl;
		getch();

}
void student::display(Student a)
{   
	cout<<"姓名:"<<a.name<<endl;
    cout<<"学号 :"<<a.xh<<endl;
    cout<<"高数、英语、vc++成绩依次为："<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<a.cj[i]<<"  ";
	}
	cout<<"总分:"<<a.zf<<endl;	
	cout<<"平均成绩"<<a.pj<<endl;
	cout<<"名次:"<<a.order<<endl;
}
class caidan
{
public:
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
	student s;
    
Denglu:	cout<<"            欢迎使用本系统！"<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*           请选择用户类型           *"<<endl;
		cout<<"*             1: 学生                *"<<endl;
		cout<<"*             2: 管理员              *"<<endl;
		cout<<"*             3: 退出                *"<<endl;
        cout<<"**************************************"<<endl;

	cin>>a;
	switch (a)
	{
case 1:
	cd1.xdenglu();
	cin>>b;
    m=xshibie(b);//学生身份的验证
    if(m==true)
	{
Xzhu :	cd1.xzhucaidan();//学生功能主菜单
		cin>>a;
		switch(a)
		{
		case 1:{goto Xzhu;break;}
		case 2:{break;}
		case 3:{break;}
		case 4:{break;}
		case 5: break;		
		}
	}
	else cout<<"登陆失败！学号有误！"<<endl;

	goto Denglu;break;
case 2:                                    //管理员进行的一切操作在第一层case 2下
	cd1.gdenglu();
	cin>>b;
	m=gshibie(b);    //管理员密码识别功能函数
	if(m==true)
	{
		Zhu:	cout<<"          请选择功能菜单              "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*         1: 查询菜单                *"<<endl;
		cout<<"*         2: 修改菜单                *"<<endl;
		cout<<"*         3: 添加学生信息            *"<<endl;
		cout<<"*         4: 注销学生                *"<<endl;
		cout<<"*         5:   退出                  *"<<endl;
		cout<<"**************************************"<<endl;
		cin>>a;
	switch (a)
	{    
		


	case 1:                        // 管理员所有的查询操作在在第二层case 1下
		{
		cd1.gchaxun();
		cin>>a;
        switch (a)
		{
		case 1:{break;}              //按姓名查询的功能
		case 2:                        //按学号查询的功能
			{
                s.select2();
				goto Zhu;
			break;			   
			}
		case 3:{break;}                 //按名次查询
		case 4:{break;}                  //显示所有 
		case 5:{break;}                   //显示及格同学成绩
		case 6:{break;}//显示及格同学成绩
		case 7:{break;}//显示前n名同学成绩
		case 8:{break;}//显示后n名同学成绩
		case 9:{goto Zhu; break;}//退出当前case 1返回管理员主菜单
		}
		}
	case 2:{break;}               //修改学生信息
	case 3:                       //添加学生信息
		{
            s.add();

			goto Zhu;break;//返回管理员主菜单
		}
	case 4:{break;}            //删除学生信息
	case 5:{break;}            //退出程序
	}
		
	}
	else cout<<"登陆失败！密码有误！"<<endl;break;
	goto Denglu;break;     // 返回用户选择菜单 
case 3:break;//退出程序
	
	}

}