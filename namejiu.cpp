#include<iostream.h>
struct student
{
   char name[10];
   char xh[10];
	int cj[4];
	int zf;
	int order;
	double pj;
};
void input(student s[],int n)
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
}
void  delate
{
    
}
void select(student st[],int n,char m[],int h)
{
    int i,j,n;
	for(i=0;i<n;i++)
	{
		if(st[i].name.equals(m)||st[i].xh.equals(m))
		{
           n=i;
		   output(st,n);
		}
	}

}
void modifly(student st,int n)
{
     
}
void output(student st[],int n)
{
	int i;
    cout<<st[n].name<<" "st[n].xh<<endl;
	cout<<"四门成绩依次为："<<endl;
	for(i=0;i<4;i++)
	{
		cout<<st[n].cj[i]<<"  ";

	}
	cout<<"该生的总分为："<<endl;
	cout<<st[n].zf<<endl;
	cout<<"该生的平均成绩为："<<endl;
    cout<<st[n].pj<<endl;
	cout<<"该生的平均名次为："<<endl;
    cout<<st[n].order<<endl;
}
void setorder(student st,n)
{
    int i,j;
	cout<<"姓名"<<setw(6)<<"学号"<<setw(6)<<"名次"<<setw(6)<<endl;
	for(i=0;i<n;i++)
	{   
		st[i].order=1;
		for(j=0,j<n;j++)
		{
			if(st[j].zf>st[i].zf)
				st[i].order+=1;
		}
		cout<<st[i].name<<" "<<st[i].xh<<" "st[i].order<<endl;
	}
}
void findnumber
{

}
void main
{
    while(true)
	    {

	          cout<<("*********************************************")<<endl;

	          cout<<("***** 欢迎使用本系统(请选择你所要的功能) ****")<<endl;

	          cout<<("             0.退出系统.                     ")<<endl; 

	          cout<<("             1.添加学生信息.                 ")<<endl; 

	          cout<<("             2.修改学生信息.                 ")<<endl; 

	          cout<<("             3.学生成绩排序.                 ")<<endl; 

	          cout<<("             4.处理学生名次.                 ")<<endl; 

	          cout<<("             5.查询学生信息 .                ")<<endl;
	          
	          cout<<("             6.删除学生信息 .                ")<<endl;
	          
	          cout<<("             7.输出所有学生信息 .            ")<<endl;
	          
	          cout<<("*********************************************")<<endl;

	          cout<<("请输入你选择的数字:")<<endl;
  switch(a)

	 		{
	 			case 0:break;

	 			case 1:
	 				{
	 					sg.appendsa();
	 					
	 					break;
	 				}

	 			case 2:{
	 				
	 				break;
	 			}
	 			case 3 :
	 				{
	 					
	 					break;
	 				}
	 				

	 			case 4:
	 				{
	 					
	 					break;
	 				}

	 			case 5:
					{ 
						char m[10];
						cout<<"请输入您要查询对象的姓名或学号："<<endl;
						cin>>m;
                        select(st,5,m,10);
		 				break;
	 				}

	 			case 6:
	 				{
		 			
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