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
	void show(int);
	void show1(int);
	void show1();
	void show2();
	void show3();//按名次显示所有同学成绩
	void show4();//显示特定分数段学生信息
//	void read();//从文件中读信息到内存
	void write();//从内存写数据到文件
	void add();
	int select(int);//按姓名查找形参为1表示纯查找，为0表示修改删除使用的查找。
	void select2();//按学号进行查找；
	void select3();//按名次
	void select4(double);//显示本人信息
	void update();
	void Delete();
	void beifen();
	void findnumber();
	struct Student st[100];
	int s;//记录学生人数的变量
};
student::student()
{
    int i,j;
	i=0;
	s=0;
    char d[100];
	ifstream fi1("学生信息文件.txt");
	fi1.getline(d,100);
	cout<<d;
    while(!fi1.eof())
	{
		
		fi1>>st[i].name;
		if(strcpy(st[i].name,"end")!=0)
		{
			fi1>>st[i].xh>>st[i].cj[0]>>st[i].cj[1]>>st[i].cj[2]>>st[i].order;
        cout<<st[i].name;
		}
		else break;

		i++;
        s++;
	} 
	fi1.close;   	
}
/*void student::read()
{
    int i,j;
	i=0;
    char d[100];
	ifstream fi1("学生信息文件.txt");
	fi1.getline(d,100);
    while(!fi1.eof())
	{
		
		fi1>>st[i].name;
		if(strcpy(st[i].name,"end")!=0)
		{
			fi1>>st[i].xh>>st[i].cj[0]>>st[i].cj[1]>>st[i].cj[2]>>st[i].order;
        cout<<st[i].name;
		}
		else break;

		i++;
        s++;
	} 
	fi1.close;   
	cout<<"  已 经 将 信 息 从 文 中 读 到 内 存 当 中 ！"<<endl;
}*/
void student::write()
{   

	int i;
	if(s==0)
	{
		cout<<" 无信息！"<<endl;
	}
	ofstream fo,fo1;
	fo.open("学生信息文件.txt");
	fo1.open("xuehao.txt");
	fo <<setw(10)<<"姓名"
	   <<setw(10)<<"学号"
    	<<setw(10)<<"高数"
		<<setw(10)<<"英语"
		<<setw(10)<<"vc++"
		<<setw(10)<<"总分"
		<<setw(10)<<"名次\n";

	for(i=0;i<s;i++)
	{
		fo <<setw(8)<<st[i].name
	   <<setw(10)<<st[i].xh
    	<<setw(10)<<st[i].cj[0]
		<<setw(10)<<st[i].cj[1]
		<<setw(10)<<st[i].cj[2]
		<<setw(10)<<st[i].zf
		<<setw(10)<<st[i].order<<"\n";
	    fo1<<" "<<st[i].xh;
	}
	fo<<setw(8)<<"end";
	fo.close;
	fo1.close;
	cout<<"  信息已保存！ "<<endl;
}
void student::add()
{
	int  i,n;
	char c[10];
	double xh;
	int d[4];
	int e,f;
	//ofstream fo1;//fo,
	/*fo.open("学生信息文件.txt");
	fo1.open("xuehao.txt");
	fo <<setw(10)<<"姓名"
	   <<setw(10)<<"学号"
    	<<setw(10)<<"高数"
		<<setw(10)<<"英语"
		<<setw(10)<<"vc++"
		<<setw(10)<<"总分"
		<<setw(10)<<"名次\n";*/

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
	/*	fo <<setw(8)<<st[i].name
	   <<setw(10)<<st[i].xh
    	<<setw(10)<<st[i].cj[0]
		<<setw(10)<<st[i].cj[1]
		<<setw(10)<<st[i].cj[2]
		<<setw(10)<<st[i].zf
		<<setw(10)<<st[i].order<<"\n";*/
	 //   fo1<<" "<<st[i].xh;
	}
//	fo.close;
//	fo1.close;
	cout<<"所有学生添加完毕。"<<endl;
}
void student::Delete()
{
	int i,j=select(0);
	if(j!=-1)
	{
        for(i=j;i<s;i++)
		{
			st[i]=st[i+1];
		}
		s--;
		

		cout<<" 删除成功！"<<endl;
		
	}
		for(i=0;i<s;i++)//删除学生信息后重新进行排名
	{   
		st[i].order=1;
		for(int j=0;j<s;j++)
		{
			if(st[j].zf>st[i].zf)
				st[i].order+=1;
		}
	}
	cout<<"按任一键返回。"<<endl;
	getch();
}
void student::beifen()
{
	ofstream fo3("学生信息备份.txt");
	fo3 <<setw(10)<<"姓名"
	   <<setw(10)<<"学号"
    	<<setw(10)<<"高数"
		<<setw(10)<<"英语"
		<<setw(10)<<"vc++"
		<<setw(10)<<"总分"
		<<setw(10)<<"名次\n";
	for(int i=0;i<s;i++)
	{
		fo3 <<setw(8)<<st[i].name
	   <<setw(10)<<st[i].xh
    	<<setw(10)<<st[i].cj[0]
		<<setw(10)<<st[i].cj[1]
		<<setw(10)<<st[i].cj[2]
		<<setw(10)<<st[i].zf
		<<setw(10)<<st[i].order<<"\n";
	}
	cout<<"学生信息备份成功！！！"<<endl;
	cout<<"按任一键返回。"<<endl;
	getch();
	fo3.close;
}
void student::update()
{
	int n;
	bool p=true;
	int j=select(0);
	if(j==-1)
		p=false;
	while(p)
	{
		
		cout<<"请输入功能选项："<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*          1: 修改姓名               *"<<endl;
		cout<<"*          2: 修改学号               *"<<endl;
        cout<<"*          3：修改成绩               *"<<endl;
        cout<<"*          4: 退出修改               *"<<endl;
		cout<<"**************************************"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				char a[10];
				cout<<"请输入新的姓名："<<endl;
				cin>>a;
				strcpy(st[j].name,a);
				cout<<endl<<"修改成功！！"<<endl;
				display(st[j]);
                p=false;
				break;
            case 2:
				double b;
				cout<<endl<<"请输入新的学号："<<endl;
				cin>>b;
				st[j].xh=b;
				cout<<"修改成功！！"<<endl;
				display(st[j]);
                p=false;
				break;
			case 3:
				{
				int c[3];
				int i,f=0,e=0;
				cout<<"请安顺序重新输入高数、英语、vc++成绩："<<endl;
                	for(i=0;i<3;i++)
					{
		            	cin>>c[i];
                     	e=e+c[i];
					}		
	            	f=e/3;
                	for(i=0;i<3;i++)
					{
		            	st[j].cj[i]=c[i];
                     	
					}
					st[j].pj=f;
					st[j].zf=e;
				cout<<endl<<"修改成功！！"<<endl;
                display(st[j]);
                p=false;
				break;
				}
			case 4:break;
		}
		cout<<"按任意间返回"<<endl;
		getch();
	}
}
int student::select(int n)
{
    int i,j;
	Student a;
	cout<<"请输入要查找的学生姓名："<<endl;
	cin>>a.name;
	for(i=0;i<s;i++)
	{
		if(strcmp(st[i].name,a.name)==0)
		{
			display(st[i]);
			j=i;
			break;

		}
	}
	if(i==s)
	{
		cout<<"您所要查询的学生不存在。"<<endl;
			j=-1;
	}
	if(n==1)
	{
		cout<<"按任意键返回。"<<endl;
	    getch();
	}
	return j;
}
void student::select2()
{
	int i,j=-1 ;
	Student b;//,c[100]
	/*char d[100];
    ifstream fi("学生信息文件.txt");
	fi.getline(d,100);
	cout<<d<<endl;
    for(i=0;i<s;i++)
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
	if(j==-1)
		cout<<"您所要查询的学生学号不存在。"<<endl;
        cout<<"按任意键返回。"<<endl;
		getch();

}
void student::select4(double xh1)
{
	int i,j=-1;
	for(i=0;i<s;i++)
	{
		
		if(st[i].xh==xh1)
		{
			display(st[i]);
			j=i;
			break;

		}
	}
	if(j==-1)
		cout<<"您所要查询的学生学号不存在。"<<endl;
        cout<<"按任意键返回。"<<endl;
		getch();

}
void student::select3()
{
   int i,j=0 ;
	Student b;
    cout<<"请输入要查找的学生名次："<<endl;
	cin>>b.order;
	for(i=0;i<s;i++)
	{
		
		if(st[i].order==b.order)
		{
			display(st[i]);
			j=i;
			break;

		}
	}
	if(j==0)
		cout<<"您所要查询的学生名次不存在。"<<endl;
        cout<<"按任意键返回。"<<endl;
		getch();

}
void student::display(Student a)
{   
	cout<<"姓名:  "<<a.name<<endl;
    cout<<"学号:  "<<a.xh<<endl;
    cout<<"高数、英语、vc++成绩依次为：  ";
	for(int i=0;i<3;i++)
	{
		cout<<a.cj[i]<<"  ";
	}
	cout<<"总分:  "<<a.zf<<endl;	
	cout<<"平均成绩： "<<a.pj<<endl;
	cout<<"名次:  "<<a.order<<endl;
}
void student::show()
{
	
	int i;
     cout<<setw(8)<<"姓名"
	    <<setw(10)<<"学号"
    	<<setw(10)<<"高数"
		<<setw(10)<<"英语"
		<<setw(10)<<"vc++"
		<<setw(10)<<"总分"
		<<setw(10)<<"名次"<<"\n";
	if(s!=0)
	{
		for(i=0;i<s;i++)
		{
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
		}
	}
	else
		cout<<"您系统中不存在学生信息!"<<endl;
		cout<<"按任意键返回！"<<endl;
		getch();
}
void student::show(int n)//输出前n名同学成绩
{
	int i;
     cout<<setw(8)<<"姓名"
	    <<setw(10)<<"学号"
    	<<setw(10)<<"高数"
		<<setw(10)<<"英语"
		<<setw(10)<<"vc++"
		<<setw(10)<<"总分"
		<<setw(10)<<"名次"<<"\n";
	for(i=0;i<s;i++)
	{
		if(st[i].order<=n)
		{
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
		}
	}
		cout<<"按任意键返回！"<<endl;
		getch();
	
}
void student::show1(int n)
{
	int m,i;
	m=s-n;
	cout<<"后n名同学名单。"<<endl;
     cout<<setw(8)<<"姓名"
	    <<setw(10)<<"学号"
    	<<setw(10)<<"高数"
		<<setw(10)<<"英语"
		<<setw(10)<<"vc++"
		<<setw(10)<<"总分"
		<<setw(10)<<"名次"<<"\n";
	for(i=0;i<s;i++)
	{
		if(st[i].order>m)
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
	}
		cout<<"按任意键返回！"<<endl;
		getch();
}
void student::show1()
{
	int i;
	cout<<"及格成绩名单！"<<endl;
     cout<<setw(8)<<"姓名"
	    <<setw(10)<<"学号"
    	<<setw(10)<<"高数"
		<<setw(10)<<"英语"
		<<setw(10)<<"vc++"
		<<setw(10)<<"总分"
		<<setw(10)<<"名次"<<"\n";
	for(i=0;i<s;i++)
	{
		if(st[i].zf>=180)
		{
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
		}
	}
		cout<<"按任意键返回！"<<endl;
		getch();
}
void student::show2()
{
	int i;
	cout<<"不及格成绩名单！"<<endl;
     cout<<setw(8)<<"姓名"
	    <<setw(10)<<"学号"
    	<<setw(10)<<"高数"
		<<setw(10)<<"英语"
		<<setw(10)<<"vc++"
		<<setw(10)<<"总分"
		<<setw(10)<<"名次"<<"\n";
	for(i=0;i<s;i++)
	{
		if(st[i].zf<180)
		{
          cout<<setw(8)<<st[i].name
	          <<setw(10)<<st[i].xh
    	      <<setw(10)<<st[i].cj[0]
	          <<setw(10)<<st[i].cj[1]
		      <<setw(10)<<st[i].cj[2]
		      <<setw(10)<<st[i].zf
		      <<setw(10)<<st[i].order<<"\n";  
		}
	}
		cout<<"按任意键返回！"<<endl;
		getch();
}
void student::show3()
{
               cout<<setw(8)<<"姓名"
               	    <<setw(10)<<"学号"
    				<<setw(10)<<"高数"
					<<setw(10)<<"英语"
					<<setw(10)<<"vc++"
					<<setw(10)<<"总分"
					<<setw(10)<<"名次"<<"\n";
				for(int j=1;j<100;j++)
				{
					for(int i=0;i<s;i++)
					{
						if(st[i].order==j)
						{
							cout<<setw(8)<<st[i].name
								<<setw(10)<<st[i].xh
    							<<setw(10)<<st[i].cj[0]
								<<setw(10)<<st[i].cj[1]
								<<setw(10)<<st[i].cj[2]
								<<setw(10)<<st[i].zf
								<<setw(10)<<st[i].order<<"\n";  
						}						  	
					}
				}
		cout<<"按任意键返回！"<<endl;
		getch();
}
void student::show4()
{
	int max,min;
	cout<<"请依次输入您选择的最低总分、最高总分"<<endl;
	cin>>min>>max;
	cout<<min<<"分到"<<max<<"分的学生信息如下："<<endl;
                cout<<setw(8)<<"姓名"
               	    <<setw(10)<<"学号"
    				<<setw(10)<<"高数"
					<<setw(10)<<"英语"
					<<setw(10)<<"vc++"
					<<setw(10)<<"总分"
					<<setw(10)<<"名次"<<"\n";
	for(int i=0;i<s;i++)
	{

		if(st[i].zf<=max&&st[i].zf>=min)
		{
	     	cout<<setw(8)<<st[i].name
		    	<<setw(10)<<st[i].xh
    			<<setw(10)<<st[i].cj[0]
				<<setw(10)<<st[i].cj[1]
				<<setw(10)<<st[i].cj[2]
				<<setw(10)<<st[i].zf
				<<setw(10)<<st[i].order<<"\n";  
		}
	}
}
void student::findnumber()
{
    int i;
	int a=0,b=0,c=0,d=0,e=0;
for(i=0;i<s;i++)
	{
	if(st[i].zf<180)
	{
		a++;
	}
      else
	        if(st[i].zf<210&&st[i].zf>=180)
		        b++;
          else 
			 if(st[i].zf<240&&st[i].zf>=210)
	          c++;
			 else
	           if(st[i].zf<270&&st[i].zf>=240)
	           d++;
			   else
	               if(st[i].zf<=300&&st[i].zf>=270)
		                   e++;
}
cout<<"各分数段人数为："<<endl;
	cout<<"180分以下： "<<a<<endl;
	cout<<"180—210分： "<<b<<endl;
	cout<<"210—240分： "<<c<<endl;
	cout<<"240—270分： "<<d<<endl;
	cout<<"270—300分："<<e<<endl;
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
		cout<<"*          5: 显示固定分数段学生信息 *"<<endl;
		cout<<"*          6: 退出                   *"<<endl;
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
		cout<<"*          8: 显示后n名同学成绩      *"<<endl;
		cout<<"*          9: 按名次显示所有同学成绩 *"<<endl;
		cout<<"*          10:显示固定分数段学生信息 *"<<endl;
        cout<<"*          11:统计各分数段人数       *"<<endl;
        cout<<"*          12:    退出               *"<<endl;
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
	//int i;
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
void xgmima()//修改密码的函数
{
			double mima1,mima2,mima3,mima4;
			ifstream fi2("mima.txt");
			fi2>>mima1;
			fi2.close;
			ofstream fo2("mima.txt");
			cout<<"请输入原密码："<<endl;
			cin>>mima2;
			if(mima1==mima2)
			{
				cout<<"请输入新密码："<<endl;
				cin>>mima3;
				cout<<"请再输入一次："<<endl;
				cin>>mima4;
				if(mima3==mima4)
				{
					fo2<<mima4;
					cout<<"密码修改成功！"<<endl;
				
				}
				else
				{
					cout<<"两次输入结果不同!拒绝修改！"<<endl;
					fo2<<mima1;
				
				}
			}
			else
			{
				cout<<"密码有误！拒绝修改！"<<endl;
				fo2<<mima1;
			
            }
            fo2.close;
		
}
void main()
{   bool m=false;
	double b;
	int a,n;
	caidan cd1;
	student s;
//	Student x,st[100];
       //s.read();
    
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
		{                               //学生所有操作在第一层case 1下
	cd1.xdenglu();
	cin>>b;
    m=xshibie(b);//调用学生身份的验证函数
	
    if(m==true)
	{
Xzhu :	cd1.xzhucaidan();//学生功能主菜单
		cin>>a;
		switch(a)
		{
		case 1:        //查询个人成绩
			{
               s.select4(b);
			   goto Xzhu;
			   
			}
		case 2:      //查询本班所有同学成绩
			{
             	s.show();
				goto Xzhu;
			     
			}
		case 3:         //查询前n名同学成绩
			{
				cout<<"请输入您选择名次的最大值："<<endl;
				cin>>n;
				s.show(n);
				goto Xzhu;
			} 
		case 4://按名次显示所有同学成绩
			{
				s.show3();
				goto Xzhu;
			}
		case 5:
			{
				s.show4();
				goto Xzhu;
			}
		case 6: break;		//退出  
		}
	}
	else cout<<"登陆失败！学号有误！"<<endl;

	goto Denglu;break;
		}
case 2:                                    //管理员进行的一切操作在第一层case 2下
	cd1.gdenglu();
	cin>>b;
	m=gshibie(b);//调用管理员密码识别功能函数
    
	if(m==true)
	{
		Zhu:	cout<<"          请选择功能菜单              "<<endl;
		cout<<"**************************************"<<endl;
		cout<<"*         1: 查询及显示菜单          *"<<endl;
		cout<<"*         2: 修改学生信息            *"<<endl;
		cout<<"*         3: 添加学生信息            *"<<endl;
		cout<<"*         4: 注销学生                *"<<endl;
		cout<<"*         5: 备份学生信息            *"<<endl;
		cout<<"*         6: 密码修改                *"<<endl;
		cout<<"*         7: 保存数据并退出          *"<<endl;
		cout<<"**************************************"<<endl;
		cin>>a;
	switch (a)
	{    
		


	case 1:                        // 管理员所有的查询操作在在第二层case 1下
		{
cha:		cd1.gchaxun();
		cin>>a;
        switch (a)
		{
		case 1:                   //按姓名查询的功能
			{
				s.select(1);
                goto cha;
				
			}              
		case 2:                        //按学号查询的功能
			{
                s.select2();
				goto cha;
						   
			}
		case 3:                          //按名次查询
			{
                s.select3();
                goto cha;
		
			}                 
		case 4:                 //显示所有 
			{
				s.show();
                goto cha;
			
			}                
		case 5:     //显示及格同学成绩
			{
				s.show1();
				goto cha;
			}              
		case 6://显示不及格同学成绩
			{
			    s.show2();
				goto cha;
			}
		case 7:               //显示前n名同学成绩
			{ 
				cout<<"请输入您选择名次的最大值："<<endl;
				cin>>n;
				s.show(n);
				goto cha;
			}
		case 8:      //显示后n名同学成绩
			{
				cout<<"请您选择输出同学的个数："<<endl;
				cin>>n;
				s.show1(n);
				goto cha;
			}
        case 9:
			{
                 s.show3();
                 goto cha;
				 
			}
		case 10://显示固定分数段学生信息
			{
				s.show4();
				goto cha;
			}
		case 11://统计各分数段人数
			{
				s.findnumber();
				goto cha;
			}
		case 12://退出当前case 1返回管理员主菜单
			{
                goto Zhu;
			}
		}
		}
	case 2:                      //修改学生信息
		{
			s.update();
			goto Zhu;
		}               
	case 3:                       //添加学生信息
		{
            s.add();
			goto Zhu;//返回管理员主菜单
		}
	case 4:              //删除学生信息
		{
			s.Delete();
            goto Zhu;
		   	
		} 
	case 5:              //备份学生信息
		{
			s.beifen();
            goto Zhu;
		   	
		}     
    case 6://修改管理员密码
		{  
            xgmima();
            goto Zhu;
		}            
	case 7:{s.write();goto Denglu;}            //重登
	}
		
	}
	else
	{ 
		cout<<"登陆失败！密码有误！"<<endl;
    	goto Denglu;              // 返回用户选择菜单
	}     
case 3:break;//退出程序
	
	}

}