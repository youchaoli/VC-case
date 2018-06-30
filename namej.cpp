#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
   char name[10];
   char xh[10];
	int cj[4];
	int zf;
	int order;
	double pj;
};
class studen
{
	public;
	studen;
	void display(student a);//显示指定学生。
    void show();
	void add();
	int select(int);//按姓名查找形参为1表示纯查找，为0表示修改删除使用的查找。
	void select2();//按学号进行查找；
	void content();
	void update();
	void Delete();
	struct student st[4];
	int s;//记录学生人数的变量
}
studen::studen(){s=0;}
void studen::display(student a)
{
	cout<<"姓名:"<<a.name<<endl;
    cout<<"学号 :"<<a.xh<<endl;
    cout<<"四门成绩依次为："<<endl;
	for(i=0;i<4;i++)
	{
		cout<<a.cj[i]<<"  ";
	}
	cout<<"总分:"<<a.zf<<endl;	
	cout<<"平均成绩"<<a.pj<<endl;
	cout<<"名次:"<<a.order<<endl;
}
void studen::add()
{
	int i,n;
	char c[10];
	char b[10];
	int d[4];
	int e,f;
    cout<<"请输入您这次要添加的学生人数："<<endl;
	cin>>n;
    for(i=s;i<n+s;i++)
	{	
		cout<<"请输入第"<<i+1<<"个学生信息"<<endl;

		cout<<"输入学生姓名："<<endl;
		cin>>b;
		cout<<"输入学生学号："<<endl;
        cin>>c;
        cout<<"依次输入学生各科成绩顺序为....."<<endl;
	     e=0;
    	for(j=0;j<4;j++)
		{
			cin>>d[j];
        	e=e+d[j];
		}
		
		f=e/4;
		strcpy(st[i].name,b);
		strcpy(st[i].xh,c);
	    st[i].cj=d;
		st[i].zf=e;
		st[i].pj=f;
	}
	s=s+n;
	cout<<"所有学生添加完毕。"<<endl;
}
//通过姓名进行查找
int studen::select(int n)
{
    int i,j;
	student a;
	cout<<"请输入要查找的学生姓名："<<endl;
	cin>>a.name;
	for(i=0;i<s;i++)
	{
		if(stramp(st[i].name,a.name)==0)
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
//按学号进行查找。
void studen::select2()
{
	int i,j=0 ;
	studnt b;
	cout<<"请输入要查找的学生学号："<<endl;
	cin>>b.xh;
	for(i=0;i<s;i++)
	{
		if(stramp(st[i].xh,b.xh)==0)
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
//修改学生信息的菜单。
void studen::content()
{
	cout<<"1修改姓名"<<endl;
	cout<<"2修改学号"<<endl;
	cout<<"3修改成绩"<<endl;
    cout<<"4退出修改"<<endl;
}
//修改学生的信息。
void studen::update()
{
	int n;
	bool p=true;
	int j=select(0);
	if(j==-1)
		p=false;
	while(p)
	{
		content();
		cout<<"请输入功能选项："<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				char a[10];
				cout<<"请输入新的姓名："<<endl;
				cin>>a;
				strcpy(st[j].name,a);
				display(st[j]);
				break;
            case 2:
				char b[10];
				cout<<"请输入新的学号："<<endl;
				cin>>a;
				strcpy(st[j].name,b);
				display(st[j]);
				break;
			case 3:
				int c[4];
				int i,f=0,e=0;
				cout<<"请重新输入四门成绩，顺序为。。。"<<endl;
                	for(i=0;i<4;i++)
					{
		            	cin>>c[i];
                     	e=e+c[i];
					}		
	            	f=e/4;
					st[j].cj=c;
					st[j].zf=f;
                display(st[j]);
				break;
		}
		cout<<"按任意间返回"<<endl;
		getch();
	}
}
//删除学生信息。
void studen::Delete()
{
	int i,j=select(0);
	if(j!=-1)
	{
        for(i=j;i<s;i++)
		{
			st[i]=st[i+1];
		}
		cout<<" 删除成功！"<<endl;
	
		
	}
	cout<<"按任一键返回。"<<endl;
	getch();
}
/*void input(student s[],int n)
{
	int i,j,zf;
	for(i=0;i<=n-1;i++)
	{	
		cout<<"输入学生姓名："<<endl;
		cin>>s[i].name;
		cout<<"输入学生学号："<<endl;
      cin>>s[i].xh;
        cout<<"依次输入学生各科成绩顺序为....."<<endl;
	     zf=0;
    	for(j=0;j<4;j++)
		{
			cin>>s[i].cj[j];
       	zf=zf+s[i].cj[j];
		}
		s[i].zf=zf;
		s[i].pj=zf/4;

	}
}*/
/*void  delate(student st[],int n)
{
	int i,j;
	cout<<"请输入要删除学生部分信息(学号或姓名)："<<endl;
     char m[10];
  i=select(st,4,m,10);
    for( j=i;j<n-1;j++)
	{
		st[j]=st[j+1];
    	n --;
		cout<<"删除成功！"<<endl;
	}
}
int select(student st[],int n,char m[],int h)
{
    int i,j;

	for(i=0;i<n;i++)
	{
		if(strcmp(st[i].name,m)||strcmp(st[i].xh,m))
		{
          j=i;
		   output(st,n,j);
		}
		else 
			cout<<"查物此人！"<<endl;
	}
	return i;
}
void modifly(student st[],int n)
{
   	int i,j;
	int zf=0;
	cout<<"请输入要修改学生部分信息(学号或姓名)："<<endl;
  i=select(st,n,m,h);
	cout<<"1：修改姓名"<<endl;
   cout<<"2: 修改学号"<<endl;
	cout<<"3: 修改成绩"<<endl;
	cin>>j;
if(j==1)
	{
	cout<<"请输入新姓名："<<endl;
    cin>>st[i].name;
}
	if(j==2)
	{
		cout<<"请输入新学号"<<endl;
		cin>>st[i].xh;
	}
	if(j==3)
	{
	cout<<"请重新输入各科成绩顺序为。。。。："<<endl;
	
     for(j=0;j<4;j++)
		{
			cin>>st[i].cj[j];
       	zf=zf+st[i].cj[j];
		}
	st[i].zf=zf;
		st[i].pj=zf/4;
}
}	
void output(student st[],int n,int j)
{
    int i;
    cout<<st[j].name<<" "st[j].xh<<endl;
	cout<<"四门成绩依次为："<<endl;
	for(i=0;i<4;i++)
	{
		cout<<st[j].cj[i]<<"  ";
	}
	cout<<"该生的总分为："<<endl;
	cout<<st[j].zf<<endl;
	cout<<"该生的平均成绩为："<<endl;
    cout<<st[j].pj<<endl;
	cout<<"该生的名次为："<<endl;
    cout<<st[j].order<<endl;
}
void setorder(student st[],int n)
{
   int i,j;

	for(i=0;i<n;i++)
	{   
		st[i].order=1;
		for(j=0;j<n;j++)
		{
			if(st[j].zf>st[i].zf)
				st[i].order+=1;
		}
		cout<<st[i].name<<" "<<st[i].xh<<" "st[i].order<<endl;
	}
}
void findnumber(student st[],int n)
{
    int i,j;
	int a=0,b=0,c=0,d=0,e=0;
for(i=0;i<4;i++)
	{
      if(st[i].pj<60)
		   a++;
   else
	       if(st[i].pj<70)
		        b++;
       else 
			 if(st[i].pj<80)
	          c++;
			 else
	           if(st[i].pj<90)
	           d++;
			   else
	               if(st[i].pj<=100)
		                   e++;
}
cout<<"各分数段人数为："<<endl;
	cout<<"60分以下：  "<<a<<endl;
	cout<<"60—70分： "<<b<<endl;
	cout<<"70—80分： "<<c<<endl;
	cout<<"80—90分： "<<d<<endl;
	cout<<"90—100分： "<<e<<endl;
}*/
//学生系统管理菜单。
void contents()
{

}
void main()
{
	student a;
	int b;
   while(true)
	    {

	          cout<<"*********************************************"<<endl;

	          cout<<"***** 欢迎使用本系统(请选择你所要的功能) ****"<<endl;

	          cout<<"             0.退出系统.                     "<<endl; 

	          cout<<"             1.添加学生信息.                 "<<endl; 

	          cout<<"             2.修改学生信息.                 "<<endl; 

	          cout<<"             3.各分段人数.                 "<<endl; 

	          cout<<"             4.处理学生名次.                 ")<<endl; 

	          cout<<"             5.查询学生信息 .                "<<endl;
	          
	          cout<<"             6.删除学生信息 .                "<<endl;
	          
	          cout<<"             7.输出所有学生信息 .            "<<endl;
	          
	          cout<<"*********************************************"<<endl;

	          cout<<"请输入你选择的数字:"<<endl;
			  cin>>b;
  switch(a)

	 		{
	 			case 0:break;

	 			case 1:
	 				{
                        
					//	input(st,4);
	 					break;
	 				}

	 			case 2:
					{
	 				   // modifly( st, 4)
	 			        break;
					}
	 			case 3 :
	 				{
	 				//	findnumber(st,4);
	 					break;
	 				}
	 				

	 			case 4:
	 				{
	 				//	setorder(st,4);
	 					break;
	 				}

	 			case 5:
					{ 
					///	char m[10];
					//	cout<<"请输入您要查询对象的姓名或学号："<<endl;
					//	cin>>m;
                      //  select(st,5,m,10);
		 				break;
	 				}

	 			case 6:
	 				{
		 			   // delate( st,4)
		 				break;
	 				}
	 			case 7:	
					{
		 			
		 				break;
					} 
	 		}	
	 		if (a==0)
	 		{
	 			cout<<("谢谢您使用本系统!")<<endl;
	 	       break;
	 			
	 		}	

	}