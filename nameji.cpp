#include<iostream.h>
#include<string.h>
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
void  delate(student st[],int n)
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
}
void main()
{
	student st[4];
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

	          cout<<("请输入你选择的数字:")<<endl;
  switch(a)

	 		{
	 			case 0:break;

	 			case 1:
	 				{
						input(st,4);
	 					break;
	 				}

	 			case 2:
					{
	 				    modifly( st, 4)
	 			        break;
					}
	 			case 3 :
	 				{
	 					findnumber(st,4);
	 					break;
	 				}
	 				

	 			case 4:
	 				{
	 					setorder(st,4);
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
		 			    delate( st,4)
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