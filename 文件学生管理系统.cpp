#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
#include<iomanip.h>
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
studen::studen(){s=0;}
void studen::display(student a)
{   
	cout<<"姓名:"<<a.name<<endl;
    cout<<"学号 :"<<a.xh<<endl;
    cout<<"四门成绩依次为："<<endl;
	for(int i=0;i<4;i++)
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
	ofstream fo;
	fo.open("学生信息文件.txt");
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
    	for(j=0;j<4;j++)
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
	
	}
	fo.close;
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
//按学号进行查找。
void studen::select2()
{
	int i,j=0 ;
	student b;
	cout<<"请输入要查找的学生学号："<<endl;
	cin>>b.xh;
	for(i=0;i<s;i++)
	{
		if(strcmp(st[i].xh,b.xh)==0)
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
				cin>>b;
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
                	for(i=0;i<4;i++)
					{
		            	st[j].cj[i]=c[i];
                     	
					}
					st[j].pj=f;
					st[j].zf=e;
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
void studen::show()
{
	int i;
	if(s!=0)
	{
		for(i=0;i<s;i++)
		{
			display(st[i]);
		}
	}
	else
		cout<<"您系统中不存在学生信息!"<<endl;
		cout<<"按任意键返回！"<<endl;
		getch();
}


void studen::setorder()
{
   int i,j;
	for(i=0;i<s;i++)
	{   
		st[i].order=1;
		for(j=0;j<s;j++)
		{
			if(st[j].zf>st[i].zf)
				st[i].order+=1;
		}
		
		cout<<"姓名:"<<st[i].name<<"  学号 "<<st[i].xh<<"  名次 "<<st[i].order<<endl;
	}
}
void studen::findnumber()
{
    int i;
	int a=0,b=0,c=0,d=0,e=0;
for(i=0;i<4;i++)
	{
	if(st[i].pj<60){
		a++;}
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
	cout<<"60分以下： "<<a<<endl;
	cout<<"60—70分： "<<b<<endl;
	cout<<"70—80分： "<<c<<endl;
	cout<<"80—90分： "<<d<<endl;
	cout<<"90—100分："<<e<<endl;
}
void main()
{
	studen a;
	int b;
   while(true)
	    {

	          cout<<"*********************************************"<<endl;

	          cout<<"***** 欢迎使用本系统(请选择你所要的功能) ****"<<endl;

	          cout<<"             0.退出系统.                     "<<endl; 

	          cout<<"             1.添加学生信息.                 "<<endl; 

	          cout<<"             2.修改学生信息.                 "<<endl; 

	          cout<<"             3.各分段人数.                 "<<endl; 

	          cout<<"             4.处理学生名次.                 "<<endl; 

	          cout<<"             5.按姓名查询学生信息 .                "<<endl;
	          
	          cout<<"             6.按学号查询学生信息 .                "<<endl;
	          
	          cout<<"             7.删除学生信息 .                "<<endl;
	          
	          cout<<"             8.输出所有学生信息 .            "<<endl;
	          
	          cout<<"*********************************************"<<endl;

	          cout<<"请输入你选择的数字:"<<endl;
			  cin>>b;
  switch(b)

	 		{
	 			case 0:break;

	 			case 1:
	 				{
                        a. add();  
					//	input(st,4);
	 					break;
	 				}

	 			case 2:
					{
						a.update();
	 				   // modifly( st, 4)
	 			        break;
					}
	 			case 3 :
	 				{
	 					a.findnumber();
	 					break;
	 				}
	 				

	 			case 4:
	 				{
	 			    	a.setorder();
	 					break;
	 				}

	 			case 5:
					{ 
                         a.select(1);

					///	char m[10];
					//	cout<<"请输入您要查询对象的姓名或学号："<<endl;
					//	cin>>m;
                      //  select(st,5,m,10);
		 				break;
	 				}
	 			case 6:
					{ 
                         a.select2();		
		 				break;
	 				}
	 			case 7:
	 				{
		 			    a.Delete();
		 				break;
	 				}
	 			case 8:	
					{
		 			    a.show();
		 				break;
					} 
	 		}	
	 		if (b==0)
	 		{
	 			cout<<("谢谢您使用本系统!")<<endl;
	 	       break;
	 			
	 		}	

	}
}